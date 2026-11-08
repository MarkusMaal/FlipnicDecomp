#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0011cff4
// Address: 0x11cff4 - 0x11d090
void entry_0011cff4_0x11cff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cff4_0x11cff4");
#endif

    switch (ctx->pc) {
        case 0x11d000u: goto label_11d000;
        case 0x11d008u: goto label_11d008;
        case 0x11d024u: goto label_11d024;
        case 0x11d038u: goto label_11d038;
        case 0x11d078u: goto label_11d078;
        case 0x11d088u: goto label_11d088;
        default: break;
    }

    ctx->pc = 0x11cff4u;

    // 0x11cff4: 0x0  nop
    ctx->pc = 0x11cff4u;
    // NOP
    // 0x11cff8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11CFF8u;
    SET_GPR_U32(ctx, 31, 0x11D000u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11CFF8u, 0x11D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D000u;
label_11d000:
    // 0x11d000: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11D000u;
    SET_GPR_U32(ctx, 31, 0x11D008u);
    ctx->pc = 0x11D004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D000u;
    // 0x11d004: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11D000u, 0x11D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D008u;
label_11d008:
    // 0x11d008: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11d008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11d00c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11d010: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x11d010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x11d014: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11d014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d018: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11d018u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x11d01c: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11D01Cu;
    SET_GPR_U32(ctx, 31, 0x11D024u);
    ctx->pc = 0x11D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D01Cu;
    // 0x11d020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11D01Cu, 0x11D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D024u;
label_11d024:
    // 0x11d024: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11d024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11d028: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11d028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d02c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d030: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11D030u;
    SET_GPR_U32(ctx, 31, 0x11D038u);
    ctx->pc = 0x11D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D030u;
    // 0x11d034: 0xac202000  sw          $zero, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11D030u, 0x11D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D038u;
label_11d038:
    // 0x11d038: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d03c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11d03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11d040: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x11d040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x11d044: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x11d044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11d048: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11d048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11d04c: 0x262400e4  addiu       $a0, $s1, 0xE4
    ctx->pc = 0x11d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x11d050: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x11d050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x11d054: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11d054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11d058: 0xac23b430  sw          $v1, -0x4BD0($at)
    ctx->pc = 0x11d058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 3));
    // 0x11d05c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11d05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11d060: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x11d060u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x11d064: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11d064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11d068: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x11d068u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x11d06c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11d06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11d070: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11D070u;
    SET_GPR_U32(ctx, 31, 0x11D078u);
    ctx->pc = 0x11D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D070u;
    // 0x11d074: 0xac202010  sw          $zero, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11D070u, 0x11D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D078u;
label_11d078:
    // 0x11d078: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11D078u;
    {
        const bool branch_taken_0x11d078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d078) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11D080u;
    // 0x11d080: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11D080u;
    SET_GPR_U32(ctx, 31, 0x11D088u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11D080u, 0x11D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D088u;
label_11d088:
    // 0x11d088: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x11D088u;
    {
        const bool branch_taken_0x11d088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d088) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11D090u;
}

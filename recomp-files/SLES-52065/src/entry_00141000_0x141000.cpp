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

// Function: entry_00141000
// Address: 0x141000 - 0x141068
void entry_00141000_0x141000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141000_0x141000");
#endif

    switch (ctx->pc) {
        case 0x141030u: goto label_141030;
        default: break;
    }

    ctx->pc = 0x141000u;

    // 0x141000: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x141000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141004: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x141004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x141008: 0x14c2ffdd  bne         $a2, $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x141008u;
    {
        const bool branch_taken_0x141008 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x141008) {
            ctx->pc = 0x140F80u;
            return;
        }
    }
    ctx->pc = 0x141010u;
    // 0x141010: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x141010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x141014: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x141014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141018: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x141018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x14101c: 0xafb40254  sw          $s4, 0x254($sp)
    ctx->pc = 0x14101cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 20));
    // 0x141020: 0xafb50258  sw          $s5, 0x258($sp)
    ctx->pc = 0x141020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 21));
    // 0x141024: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x141024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141028: 0xc050184  jal         func_140610
    ctx->pc = 0x141028u;
    SET_GPR_U32(ctx, 31, 0x141030u);
    ctx->pc = 0x14102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141028u;
    // 0x14102c: 0xafa20250  sw          $v0, 0x250($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x141028u, 0x141030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141030u;
label_141030:
    // 0x141030: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141034: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x141034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x141038: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x141038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x14103c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x14103cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x141040: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x141040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x141044: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x141044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x141048: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x141048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14104c: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x14104cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x141050: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x141050u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141054: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x141054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141058: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x141058u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x14105c: 0x122000e1  beqz        $s1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x14105Cu;
    {
        const bool branch_taken_0x14105c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x141060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14105Cu;
        // 0x141060: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14105c) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x141064u;
    // 0x141064: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x141064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    ctx->pc = 0x141068u;
}

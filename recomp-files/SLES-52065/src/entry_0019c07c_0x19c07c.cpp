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

// Function: entry_0019c07c
// Address: 0x19c07c - 0x19c0ec
void entry_0019c07c_0x19c07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c07c_0x19c07c");
#endif

    switch (ctx->pc) {
        case 0x19c084u: goto label_19c084;
        case 0x19c098u: goto label_19c098;
        case 0x19c0b8u: goto label_19c0b8;
        case 0x19c0c8u: goto label_19c0c8;
        case 0x19c0dcu: goto label_19c0dc;
        case 0x19c0e4u: goto label_19c0e4;
        default: break;
    }

    ctx->pc = 0x19c07cu;

    // 0x19c07c: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x19C07Cu;
    SET_GPR_U32(ctx, 31, 0x19C084u);
    ctx->pc = 0x19C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C07Cu;
    // 0x19c080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x19C07Cu, 0x19C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C084u;
label_19c084:
    // 0x19c084: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19c084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c088: 0x26240940  addiu       $a0, $s1, 0x940
    ctx->pc = 0x19c088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
    // 0x19c08c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19c08cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x19c090: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x19C090u;
    SET_GPR_U32(ctx, 31, 0x19C098u);
    ctx->pc = 0x19C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C090u;
    // 0x19c094: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x19C090u, 0x19C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C098u;
label_19c098:
    // 0x19c098: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c09c: 0x26240940  addiu       $a0, $s1, 0x940
    ctx->pc = 0x19c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
    // 0x19c0a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c0a4: 0x0  nop
    ctx->pc = 0x19c0a4u;
    // NOP
    // 0x19c0a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19c0a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x19c0ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x19c0acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x19c0b0: 0xc062860  jal         func_18A180
    ctx->pc = 0x19C0B0u;
    SET_GPR_U32(ctx, 31, 0x19C0B8u);
    ctx->pc = 0x19C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0B0u;
    // 0x19c0b4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x19C0B0u, 0x19C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0B8u;
label_19c0b8:
    // 0x19c0b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x19c0bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c0c0: 0xc062858  jal         func_18A160
    ctx->pc = 0x19C0C0u;
    SET_GPR_U32(ctx, 31, 0x19C0C8u);
    ctx->pc = 0x19C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0C0u;
    // 0x19c0c4: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x19C0C0u, 0x19C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0C8u;
label_19c0c8:
    // 0x19c0c8: 0x92220a98  lbu         $v0, 0xA98($s1)
    ctx->pc = 0x19c0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2712)));
    // 0x19c0cc: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x19C0CCu;
    {
        const bool branch_taken_0x19c0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c0cc) {
            ctx->pc = 0x19C328u;
            return;
        }
    }
    ctx->pc = 0x19C0D4u;
    // 0x19c0d4: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x19C0D4u;
    SET_GPR_U32(ctx, 31, 0x19C0DCu);
    ctx->pc = 0x19C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0D4u;
    // 0x19c0d8: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x19C0D4u, 0x19C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0DCu;
label_19c0dc:
    // 0x19c0dc: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19C0DCu;
    SET_GPR_U32(ctx, 31, 0x19C0E4u);
    ctx->pc = 0x19C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0DCu;
    // 0x19c0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19C0DCu, 0x19C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0E4u;
label_19c0e4:
    // 0x19c0e4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x19C0E4u;
    {
        const bool branch_taken_0x19c0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c0e4) {
            ctx->pc = 0x19C328u;
            return;
        }
    }
    ctx->pc = 0x19C0ECu;
}

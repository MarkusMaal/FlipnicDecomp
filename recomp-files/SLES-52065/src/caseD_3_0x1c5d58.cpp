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

// Function: caseD_3
// Address: 0x1c5d58 - 0x1c5dc4
void caseD_3_0x1c5d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1c5d58");
#endif

    switch (ctx->pc) {
        case 0x1c5d60u: goto label_1c5d60;
        case 0x1c5d7cu: goto label_1c5d7c;
        case 0x1c5d98u: goto label_1c5d98;
        case 0x1c5da0u: goto label_1c5da0;
        case 0x1c5dacu: goto label_1c5dac;
        default: break;
    }

    ctx->pc = 0x1c5d58u;

    // 0x1c5d58: 0xc06d354  jal         func_1B4D50
    ctx->pc = 0x1C5D58u;
    SET_GPR_U32(ctx, 31, 0x1C5D60u);
    ctx->pc = 0x1B4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D50u, 0x1C5D58u, 0x1C5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D60u;
label_1c5d60:
    // 0x1c5d60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5d64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5d68: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1c5d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c5d6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5d70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5d74: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1C5D74u;
    SET_GPR_U32(ctx, 31, 0x1C5D7Cu);
    ctx->pc = 0x1C5D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D74u;
    // 0x1c5d78: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1C5D74u, 0x1C5D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D7Cu;
label_1c5d7c:
    // 0x1c5d7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5d80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d84: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c5d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5d88: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5d88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5d8c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c5d8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5d90: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1C5D90u;
    SET_GPR_U32(ctx, 31, 0x1C5D98u);
    ctx->pc = 0x1C5D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D90u;
    // 0x1c5d94: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1C5D90u, 0x1C5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D98u;
label_1c5d98:
    // 0x1c5d98: 0xc04d988  jal         func_136620
    ctx->pc = 0x1C5D98u;
    SET_GPR_U32(ctx, 31, 0x1C5DA0u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1C5D98u, 0x1C5DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DA0u;
label_1c5da0:
    // 0x1c5da0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5da4: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1C5DA4u;
    SET_GPR_U32(ctx, 31, 0x1C5DACu);
    ctx->pc = 0x1C5DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DA4u;
    // 0x1c5da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1C5DA4u, 0x1C5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DACu;
label_1c5dac:
    // 0x1c5dac: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x1c5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5db0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5db4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c5db8: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x1c5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x1c5dbc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C5DBCu;
    {
        const bool branch_taken_0x1c5dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DBCu;
        // 0x1c5dc0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5dbc) {
            ctx->pc = 0x1C5EC0u;
            return;
        }
    }
    ctx->pc = 0x1C5DC4u;
}

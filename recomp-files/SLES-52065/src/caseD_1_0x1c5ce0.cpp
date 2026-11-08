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

// Function: caseD_1
// Address: 0x1c5ce0 - 0x1c5d30
void caseD_1_0x1c5ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1c5ce0");
#endif

    switch (ctx->pc) {
        case 0x1c5cf8u: goto label_1c5cf8;
        case 0x1c5d18u: goto label_1c5d18;
        default: break;
    }

    ctx->pc = 0x1c5ce0u;

    // 0x1c5ce0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5ce4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ce8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5ce8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5cec: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c5cecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5cf0: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1C5CF0u;
    SET_GPR_U32(ctx, 31, 0x1C5CF8u);
    ctx->pc = 0x1C5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5CF0u;
    // 0x1c5cf4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1C5CF0u, 0x1C5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CF8u;
label_1c5cf8:
    // 0x1c5cf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5cfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5d00: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1c5d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c5d04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d08: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5d08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5d0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5d10: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1C5D10u;
    SET_GPR_U32(ctx, 31, 0x1C5D18u);
    ctx->pc = 0x1C5D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D10u;
    // 0x1c5d14: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1C5D10u, 0x1C5D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D18u;
label_1c5d18:
    // 0x1c5d18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5d1c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1c5d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1c5d20: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1c5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5d24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5d28: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1C5D28u;
    {
        const bool branch_taken_0x1c5d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D28u;
        // 0x1c5d2c: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d28) {
            ctx->pc = 0x1C5EC0u;
            return;
        }
    }
    ctx->pc = 0x1C5D30u;
}

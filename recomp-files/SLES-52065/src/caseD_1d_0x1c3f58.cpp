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

// Function: caseD_1d
// Address: 0x1c3f58 - 0x1c3fb8
void caseD_1d_0x1c3f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1d_0x1c3f58");
#endif

    switch (ctx->pc) {
        case 0x1c3f64u: goto label_1c3f64;
        case 0x1c3f70u: goto label_1c3f70;
        case 0x1c3f7cu: goto label_1c3f7c;
        case 0x1c3f88u: goto label_1c3f88;
        case 0x1c3f90u: goto label_1c3f90;
        case 0x1c3facu: goto label_1c3fac;
        default: break;
    }

    ctx->pc = 0x1c3f58u;

    // 0x1c3f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f5c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C3F64u);
    ctx->pc = 0x1C3F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F5Cu;
    // 0x1c3f60: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3F5Cu, 0x1C3F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F64u;
label_1c3f64:
    // 0x1c3f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f68: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3F68u;
    SET_GPR_U32(ctx, 31, 0x1C3F70u);
    ctx->pc = 0x1C3F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F68u;
    // 0x1c3f6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3F68u, 0x1C3F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F70u;
label_1c3f70:
    // 0x1c3f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f74: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3F74u;
    SET_GPR_U32(ctx, 31, 0x1C3F7Cu);
    ctx->pc = 0x1C3F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F74u;
    // 0x1c3f78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3F74u, 0x1C3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F7Cu;
label_1c3f7c:
    // 0x1c3f7c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c3f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c3f80: 0xc06d000  jal         func_1B4000
    ctx->pc = 0x1C3F80u;
    SET_GPR_U32(ctx, 31, 0x1C3F88u);
    ctx->pc = 0x1C3F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F80u;
    // 0x1c3f84: 0x8c24ca84  lw          $a0, -0x357C($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4000u, 0x1C3F80u, 0x1C3F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F88u;
label_1c3f88:
    // 0x1c3f88: 0xc07318c  jal         func_1CC630
    ctx->pc = 0x1C3F88u;
    SET_GPR_U32(ctx, 31, 0x1C3F90u);
    ctx->pc = 0x1CC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC630u, 0x1C3F88u, 0x1C3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F90u;
label_1c3f90:
    // 0x1c3f90: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c3f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c3f94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c3f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c3f98: 0x8c26ca84  lw          $a2, -0x357C($at)
    ctx->pc = 0x1c3f98u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c3f9c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3fa0: 0x24a51c80  addiu       $a1, $a1, 0x1C80
    ctx->pc = 0x1c3fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7296));
    // 0x1c3fa4: 0xc074ad4  jal         func_1D2B50
    ctx->pc = 0x1C3FA4u;
    SET_GPR_U32(ctx, 31, 0x1C3FACu);
    ctx->pc = 0x1C3FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FA4u;
    // 0x1c3fa8: 0x24072780  addiu       $a3, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2B50u, 0x1C3FA4u, 0x1C3FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FACu;
label_1c3fac:
    // 0x1c3fac: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c3facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c3fb0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x1C3FB0u;
    {
        const bool branch_taken_0x1c3fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FB0u;
        // 0x1c3fb4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fb0) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3FB8u;
}

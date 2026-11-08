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

// Function: caseD_6
// Address: 0x1d2200 - 0x1d225c
void caseD_6_0x1d2200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1d2200");
#endif

    switch (ctx->pc) {
        case 0x1d2210u: goto label_1d2210;
        case 0x1d2220u: goto label_1d2220;
        case 0x1d2234u: goto label_1d2234;
        case 0x1d2244u: goto label_1d2244;
        default: break;
    }

    ctx->pc = 0x1d2200u;

    // 0x1d2200: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d2200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d2204: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2208: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2208u;
    SET_GPR_U32(ctx, 31, 0x1D2210u);
    ctx->pc = 0x1D220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2208u;
    // 0x1d220c: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2208u, 0x1D2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2210u;
label_1d2210:
    // 0x1d2210: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d2210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d2214: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2218: 0xc080664  jal         func_201990
    ctx->pc = 0x1D2218u;
    SET_GPR_U32(ctx, 31, 0x1D2220u);
    ctx->pc = 0x1D221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2218u;
    // 0x1d221c: 0x24a53520  addiu       $a1, $a1, 0x3520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D2218u, 0x1D2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2220u;
label_1d2220:
    // 0x1d2220: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2228: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1d2228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d222c: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D222Cu;
    SET_GPR_U32(ctx, 31, 0x1D2234u);
    ctx->pc = 0x1D2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D222Cu;
    // 0x1d2230: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D222Cu, 0x1D2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2234u;
label_1d2234:
    // 0x1d2234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2238: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d223c: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D223Cu;
    SET_GPR_U32(ctx, 31, 0x1D2244u);
    ctx->pc = 0x1D2240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D223Cu;
    // 0x1d2240: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D223Cu, 0x1D2244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2244u;
label_1d2244:
    // 0x1d2244: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2248: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d2248u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d224c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d224cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2250: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2254: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D2254u;
    {
        const bool branch_taken_0x1d2254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2254u;
        // 0x1d2258: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2254) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D225Cu;
}

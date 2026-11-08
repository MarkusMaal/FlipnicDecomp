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
// Address: 0x1d2114 - 0x1d2180
void caseD_3_0x1d2114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1d2114");
#endif

    switch (ctx->pc) {
        case 0x1d2124u: goto label_1d2124;
        case 0x1d2134u: goto label_1d2134;
        case 0x1d2144u: goto label_1d2144;
        case 0x1d2158u: goto label_1d2158;
        case 0x1d2168u: goto label_1d2168;
        default: break;
    }

    ctx->pc = 0x1d2114u;

    // 0x1d2114: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d2114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d2118: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d211c: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D211Cu;
    SET_GPR_U32(ctx, 31, 0x1D2124u);
    ctx->pc = 0x1D2120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D211Cu;
    // 0x1d2120: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D211Cu, 0x1D2124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2124u;
label_1d2124:
    // 0x1d2124: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d2124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d2128: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d212c: 0xc080664  jal         func_201990
    ctx->pc = 0x1D212Cu;
    SET_GPR_U32(ctx, 31, 0x1D2134u);
    ctx->pc = 0x1D2130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D212Cu;
    // 0x1d2130: 0x24a53518  addiu       $a1, $a1, 0x3518 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D212Cu, 0x1D2134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2134u;
label_1d2134:
    // 0x1d2134: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d2138: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d2138u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d213c: 0xc080664  jal         func_201990
    ctx->pc = 0x1D213Cu;
    SET_GPR_U32(ctx, 31, 0x1D2144u);
    ctx->pc = 0x1D2140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D213Cu;
    // 0x1d2140: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D213Cu, 0x1D2144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2144u;
label_1d2144:
    // 0x1d2144: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d214c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1d214cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2150: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D2150u;
    SET_GPR_U32(ctx, 31, 0x1D2158u);
    ctx->pc = 0x1D2154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2150u;
    // 0x1d2154: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D2150u, 0x1D2158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2158u;
label_1d2158:
    // 0x1d2158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d215c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2160: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2160u;
    SET_GPR_U32(ctx, 31, 0x1D2168u);
    ctx->pc = 0x1D2164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2160u;
    // 0x1d2164: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2160u, 0x1D2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2168u;
label_1d2168:
    // 0x1d2168: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d216c: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d216cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d2170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2174: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2178: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1D2178u;
    {
        const bool branch_taken_0x1d2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2178u;
        // 0x1d217c: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2178) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D2180u;
}

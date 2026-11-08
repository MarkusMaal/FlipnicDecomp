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

// Function: entry_001a2268
// Address: 0x1a2268 - 0x1a22bc
void entry_001a2268_0x1a2268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2268_0x1a2268");
#endif

    switch (ctx->pc) {
        case 0x1a2274u: goto label_1a2274;
        case 0x1a2280u: goto label_1a2280;
        case 0x1a228cu: goto label_1a228c;
        case 0x1a2298u: goto label_1a2298;
        case 0x1a22a4u: goto label_1a22a4;
        default: break;
    }

    ctx->pc = 0x1a2268u;

    // 0x1a2268: 0x262408a0  addiu       $a0, $s1, 0x8A0
    ctx->pc = 0x1a2268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2208));
    // 0x1a226c: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x1A226Cu;
    SET_GPR_U32(ctx, 31, 0x1A2274u);
    ctx->pc = 0x1A2270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A226Cu;
    // 0x1a2270: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x1A226Cu, 0x1A2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2274u;
label_1a2274:
    // 0x1a2274: 0x26240800  addiu       $a0, $s1, 0x800
    ctx->pc = 0x1a2274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2048));
    // 0x1a2278: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A2278u;
    SET_GPR_U32(ctx, 31, 0x1A2280u);
    ctx->pc = 0x1A227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2278u;
    // 0x1a227c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A2278u, 0x1A2280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2280u;
label_1a2280:
    // 0x1a2280: 0x26240760  addiu       $a0, $s1, 0x760
    ctx->pc = 0x1a2280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1888));
    // 0x1a2284: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A2284u;
    SET_GPR_U32(ctx, 31, 0x1A228Cu);
    ctx->pc = 0x1A2288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2284u;
    // 0x1a2288: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A2284u, 0x1A228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A228Cu;
label_1a228c:
    // 0x1a228c: 0x262406c0  addiu       $a0, $s1, 0x6C0
    ctx->pc = 0x1a228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
    // 0x1a2290: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A2290u;
    SET_GPR_U32(ctx, 31, 0x1A2298u);
    ctx->pc = 0x1A2294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2290u;
    // 0x1a2294: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A2290u, 0x1A2298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2298u;
label_1a2298:
    // 0x1a2298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a229c: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A229Cu;
    SET_GPR_U32(ctx, 31, 0x1A22A4u);
    ctx->pc = 0x1A22A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A229Cu;
    // 0x1a22a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A229Cu, 0x1A22A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22A4u;
label_1a22a4:
    // 0x1a22a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a22a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a22a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a22a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a22ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A22ACu;
    {
        const bool branch_taken_0x1a22ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22ACu;
        // 0x1a22b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a22ac) {
            ctx->pc = 0x1A22C0u;
            return;
        }
    }
    ctx->pc = 0x1A22B4u;
    // 0x1a22b4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A22B4u;
    SET_GPR_U32(ctx, 31, 0x1A22BCu);
    ctx->pc = 0x1A22B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22B4u;
    // 0x1a22b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A22B4u, 0x1A22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22BCu;
}

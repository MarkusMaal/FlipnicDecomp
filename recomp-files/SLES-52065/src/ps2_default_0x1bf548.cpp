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

// Function: default
// Address: 0x1bf548 - 0x1bf580
void ps2_default_0x1bf548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1bf548");
#endif

    switch (ctx->pc) {
        case 0x1bf558u: goto label_1bf558;
        case 0x1bf56cu: goto label_1bf56c;
        default: break;
    }

    ctx->pc = 0x1bf548u;

    // 0x1bf548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf54c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf550: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1BF550u;
    SET_GPR_U32(ctx, 31, 0x1BF558u);
    ctx->pc = 0x1BF554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF550u;
    // 0x1bf554: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1BF550u, 0x1BF558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF558u;
label_1bf558:
    // 0x1bf558: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf560: 0x24a534b0  addiu       $a1, $a1, 0x34B0
    ctx->pc = 0x1bf560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13488));
    // 0x1bf564: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1BF564u;
    SET_GPR_U32(ctx, 31, 0x1BF56Cu);
    ctx->pc = 0x1BF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF564u;
    // 0x1bf568: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1BF564u, 0x1BF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF56Cu;
label_1bf56c:
    // 0x1bf56c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf574: 0x24a535c0  addiu       $a1, $a1, 0x35C0
    ctx->pc = 0x1bf574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13760));
    // 0x1bf578: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1BF578u;
    SET_GPR_U32(ctx, 31, 0x1BF580u);
    ctx->pc = 0x1BF57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF578u;
    // 0x1bf57c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1BF578u, 0x1BF580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF580u;
}

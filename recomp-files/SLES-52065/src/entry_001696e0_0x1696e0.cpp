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

// Function: entry_001696e0
// Address: 0x1696e0 - 0x169714
void entry_001696e0_0x1696e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001696e0_0x1696e0");
#endif

    switch (ctx->pc) {
        case 0x1696f8u: goto label_1696f8;
        case 0x16970cu: goto label_16970c;
        default: break;
    }

    ctx->pc = 0x1696e0u;

    // 0x1696e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1696e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1696e4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1696E4u;
    {
        const bool branch_taken_0x1696e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1696E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696E4u;
        // 0x1696e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696e4) {
            ctx->pc = 0x169714u;
            return;
        }
    }
    ctx->pc = 0x1696ECu;
    // 0x1696ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1696ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696f0: 0xc042118  jal         func_108460
    ctx->pc = 0x1696F0u;
    SET_GPR_U32(ctx, 31, 0x1696F8u);
    ctx->pc = 0x1696F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696F0u;
    // 0x1696f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1696F0u, 0x1696F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696F8u;
label_1696f8:
    // 0x1696f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1696f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1696fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1696fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169700: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169704: 0xc0425a4  jal         func_109690
    ctx->pc = 0x169704u;
    SET_GPR_U32(ctx, 31, 0x16970Cu);
    ctx->pc = 0x169708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169704u;
    // 0x169708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169704u, 0x16970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16970Cu;
label_16970c:
    // 0x16970c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x16970Cu;
    {
        const bool branch_taken_0x16970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16970Cu;
        // 0x169710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16970c) {
            ctx->pc = 0x169714u;
            return;
        }
    }
    ctx->pc = 0x169714u;
}

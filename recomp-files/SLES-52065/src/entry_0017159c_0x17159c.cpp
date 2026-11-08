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

// Function: entry_0017159c
// Address: 0x17159c - 0x1715d8
void entry_0017159c_0x17159c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017159c_0x17159c");
#endif

    switch (ctx->pc) {
        case 0x1715b4u: goto label_1715b4;
        default: break;
    }

    ctx->pc = 0x17159cu;

label_17159c:
    // 0x17159c: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x17159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1715a0: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1715a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1715a4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1715a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1715a8: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x1715a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1715ac: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1715ACu;
    SET_GPR_U32(ctx, 31, 0x1715B4u);
    ctx->pc = 0x1715B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715ACu;
    // 0x1715b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1715ACu, 0x1715B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715B4u;
label_1715b4:
    // 0x1715b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1715b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1715b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1715b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1715bc: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1715bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1715c0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1715C0u;
    {
        const bool branch_taken_0x1715c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1715C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715C0u;
        // 0x1715c4: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715c0) {
            ctx->pc = 0x17159Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17159c;
        }
    }
    ctx->pc = 0x1715C8u;
    // 0x1715c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1715c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1715ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715d0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1715d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1715d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1715d8u;
}

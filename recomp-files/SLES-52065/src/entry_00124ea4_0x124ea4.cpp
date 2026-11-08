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

// Function: entry_00124ea4
// Address: 0x124ea4 - 0x124ee4
void entry_00124ea4_0x124ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124ea4_0x124ea4");
#endif

    switch (ctx->pc) {
        case 0x124ec4u: goto label_124ec4;
        case 0x124ed0u: goto label_124ed0;
        default: break;
    }

    ctx->pc = 0x124ea4u;

    // 0x124ea4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x124ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x124ea8: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x124ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x124eac: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x124eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x124eb0: 0x24a5eae0  addiu       $a1, $a1, -0x1520
    ctx->pc = 0x124eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961888));
    // 0x124eb4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x124eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x124eb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x124eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ebc: 0xc0805c8  jal         func_201720
    ctx->pc = 0x124EBCu;
    SET_GPR_U32(ctx, 31, 0x124EC4u);
    ctx->pc = 0x124EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EBCu;
    // 0x124ec0: 0x2508eaf0  addiu       $t0, $t0, -0x1510 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x124EBCu, 0x124EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EC4u;
label_124ec4:
    // 0x124ec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x124ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ec8: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x124EC8u;
    SET_GPR_U32(ctx, 31, 0x124ED0u);
    ctx->pc = 0x124ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EC8u;
    // 0x124ecc: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x124EC8u, 0x124ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124ED0u;
label_124ed0:
    // 0x124ed0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x124ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ed4: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x124ED4u;
    {
        const bool branch_taken_0x124ed4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x124ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124ED4u;
        // 0x124ed8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ed4) {
            ctx->pc = 0x124EE4u;
            return;
        }
    }
    ctx->pc = 0x124EDCu;
    // 0x124edc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x124EDCu;
    {
        const bool branch_taken_0x124edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EDCu;
        // 0x124ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124edc) {
            ctx->pc = 0x125024u;
            return;
        }
    }
    ctx->pc = 0x124EE4u;
}

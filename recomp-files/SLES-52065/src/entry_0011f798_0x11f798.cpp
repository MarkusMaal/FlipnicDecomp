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

// Function: entry_0011f798
// Address: 0x11f798 - 0x11f7f8
void entry_0011f798_0x11f798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f798_0x11f798");
#endif

    ctx->pc = 0x11f798u;

label_11f798:
    // 0x11f798: 0xa85821  addu        $t3, $a1, $t0
    ctx->pc = 0x11f798u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x11f79c: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x11f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x11f7a0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x11f7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x11f7a4: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x11f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    // 0x11f7a8: 0x28e30400  slti        $v1, $a3, 0x400
    ctx->pc = 0x11f7a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11f7ac: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x11f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x11f7b0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x11f7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x11f7b4: 0xad600018  sw          $zero, 0x18($t3)
    ctx->pc = 0x11f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 0));
    // 0x11f7b8: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x11f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x11f7bc: 0xad600020  sw          $zero, 0x20($t3)
    ctx->pc = 0x11f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 0));
    // 0x11f7c0: 0xad600024  sw          $zero, 0x24($t3)
    ctx->pc = 0x11f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 0));
    // 0x11f7c4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11F7C4u;
    {
        const bool branch_taken_0x11f7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7C4u;
        // 0x11f7c8: 0xad600028  sw          $zero, 0x28($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7c4) {
            ctx->pc = 0x11F798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f798;
        }
    }
    ctx->pc = 0x11F7CCu;
    // 0x11f7cc: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x11f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x11f7d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11f7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11f7d4: 0xac60200c  sw          $zero, 0x200C($v1)
    ctx->pc = 0x11f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8204), GPR_U32(ctx, 0));
    // 0x11f7d8: 0x25291000  addiu       $t1, $t1, 0x1000
    ctx->pc = 0x11f7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4096));
    // 0x11f7dc: 0xac602014  sw          $zero, 0x2014($v1)
    ctx->pc = 0x11f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8212), GPR_U32(ctx, 0));
    // 0x11f7e0: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x11f7e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f7e4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11F7E4u;
    {
        const bool branch_taken_0x11f7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7E4u;
        // 0x11f7e8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7e4) {
            ctx->pc = 0x11F78Cu;
            return;
        }
    }
    ctx->pc = 0x11F7ECu;
    // 0x11f7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11F7F0u;
    {
        const bool branch_taken_0x11f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7F0u;
        // 0x11f7f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7f0) {
            ctx->pc = 0x11F830u;
            return;
        }
    }
    ctx->pc = 0x11F7F8u;
}

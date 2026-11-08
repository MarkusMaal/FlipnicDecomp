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

// Function: entry_001fd9b8
// Address: 0x1fd9b8 - 0x1fda00
void entry_001fd9b8_0x1fd9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd9b8_0x1fd9b8");
#endif

    ctx->pc = 0x1fd9b8u;

    // 0x1fd9b8: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x1fd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1fd9bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fd9c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd9c4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FD9C4u;
    {
        const bool branch_taken_0x1fd9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9C4u;
        // 0x1fd9c8: 0x35220001  ori         $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9c4) {
            ctx->pc = 0x1FDA18u;
            return;
        }
    }
    ctx->pc = 0x1FD9CCu;
    // 0x1fd9cc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD9CCu;
    {
        const bool branch_taken_0x1fd9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9CCu;
        // 0x1fd9d0: 0x12b4821  addu        $t1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9cc) {
            ctx->pc = 0x1FDA00u;
            return;
        }
    }
    ctx->pc = 0x1FD9D4u;
    // 0x1fd9d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fd9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fd9d8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1fd9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fd9dc: 0x2442d9d0  addiu       $v0, $v0, -0x2630
    ctx->pc = 0x1fd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957520));
    // 0x1fd9e0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD9E0u;
    {
        const bool branch_taken_0x1fd9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd9e0) {
            ctx->pc = 0x1FD9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD9E0u;
            // 0x1fd9e4: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDA08u;
            return;
        }
    }
    ctx->pc = 0x1FD9E8u;
    // 0x1fd9e8: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x1fd9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x1fd9ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fd9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd9f0: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x1fd9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x1fd9f4: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x1fd9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x1fd9f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD9F8u;
    {
        const bool branch_taken_0x1fd9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9F8u;
        // 0x1fd9fc: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9f8) {
            ctx->pc = 0x1FDA14u;
            return;
        }
    }
    ctx->pc = 0x1FDA00u;
}

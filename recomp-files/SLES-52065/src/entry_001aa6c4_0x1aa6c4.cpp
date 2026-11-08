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

// Function: entry_001aa6c4
// Address: 0x1aa6c4 - 0x1aa728
void entry_001aa6c4_0x1aa6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa6c4_0x1aa6c4");
#endif

    ctx->pc = 0x1aa6c4u;

label_1aa6c4:
    // 0x1aa6c4: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aa6c8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1aa6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aa6cc: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1aa6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1aa6d0: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x1aa6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1aa6d4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1aa6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1aa6d8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1aa6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1aa6dc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1aa6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1aa6e0: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x1aa6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1aa6e4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1aa6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x1aa6e8: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1aa6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1aa6ec: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x1aa6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x1aa6f0: 0x24a20005  addiu       $v0, $a1, 0x5
    ctx->pc = 0x1aa6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x1aa6f4: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1aa6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1aa6f8: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x1aa6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1aa6fc: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x1aa6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x1aa700: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x1aa700u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x1aa704: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1aa704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1aa708: 0x18a0ffee  blez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AA708u;
    {
        const bool branch_taken_0x1aa708 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1AA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA708u;
        // 0x1aa70c: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa708) {
            ctx->pc = 0x1AA6C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa6c4;
        }
    }
    ctx->pc = 0x1AA710u;
    // 0x1aa710: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1aa710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1aa714: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1AA714u;
    {
        const bool branch_taken_0x1aa714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa714) {
            ctx->pc = 0x1AA744u;
            return;
        }
    }
    ctx->pc = 0x1AA71Cu;
    // 0x1aa71c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1aa71cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1aa720: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aa720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1aa724: 0x2463e090  addiu       $v1, $v1, -0x1F70
    ctx->pc = 0x1aa724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959248));
    ctx->pc = 0x1aa728u;
}

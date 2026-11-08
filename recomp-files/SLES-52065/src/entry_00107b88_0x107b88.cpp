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

// Function: entry_00107b88
// Address: 0x107b88 - 0x107bd8
void entry_00107b88_0x107b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107b88_0x107b88");
#endif

    ctx->pc = 0x107b88u;

    // 0x107b88: 0xe95821  addu        $t3, $a3, $t1
    ctx->pc = 0x107b88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x107b8c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x107b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x107b90: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x107B90u;
    {
        const bool branch_taken_0x107b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107b90) {
            ctx->pc = 0x107BD8u;
            return;
        }
    }
    ctx->pc = 0x107B98u;
    // 0x107b98: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x107b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x107b9c: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x107b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x107ba0: 0x14a3000d  bne         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x107BA0u;
    {
        const bool branch_taken_0x107ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x107ba0) {
            ctx->pc = 0x107BD8u;
            return;
        }
    }
    ctx->pc = 0x107BA8u;
    // 0x107ba8: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x107ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x107bac: 0x28a10000  slti        $at, $a1, 0x0
    ctx->pc = 0x107bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x107bb0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x107BB0u;
    {
        const bool branch_taken_0x107bb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x107BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BB0u;
        // 0x107bb4: 0x256d0004  addiu       $t5, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bb0) {
            ctx->pc = 0x107BD8u;
            return;
        }
    }
    ctx->pc = 0x107BB8u;
    // 0x107bb8: 0x8d830010  lw          $v1, 0x10($t4)
    ctx->pc = 0x107bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x107bbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x107bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x107bc0: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x107bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x107bc4: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x107bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x107bc8: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x107bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x107bcc: 0x8d830010  lw          $v1, 0x10($t4)
    ctx->pc = 0x107bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x107bd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x107bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x107bd4: 0xad830010  sw          $v1, 0x10($t4)
    ctx->pc = 0x107bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x107bd8u;
}

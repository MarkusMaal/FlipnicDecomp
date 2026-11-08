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

// Function: entry_0015f43c
// Address: 0x15f43c - 0x15f480
void entry_0015f43c_0x15f43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f43c_0x15f43c");
#endif

    ctx->pc = 0x15f43cu;

    // 0x15f43c: 0x0  nop
    ctx->pc = 0x15f43cu;
    // NOP
    // 0x15f440: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15f440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15f444: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x15F444u;
    {
        const bool branch_taken_0x15f444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f444) {
            ctx->pc = 0x15F358u;
            return;
        }
    }
    ctx->pc = 0x15F44Cu;
    // 0x15f44c: 0x8e432c1c  lw          $v1, 0x2C1C($s2)
    ctx->pc = 0x15f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11292)));
    // 0x15f450: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x15f450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x15f454: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x15f454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x15f458: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15f458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15f45c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f460: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x15f460u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15f464: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15f468: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x15f468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15f46c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f470: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x15f470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15f474: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x15f474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15f478: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x15F478u;
    {
        const bool branch_taken_0x15f478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F478u;
        // 0x15f47c: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f478) {
            ctx->pc = 0x15F62Cu;
            return;
        }
    }
    ctx->pc = 0x15F480u;
}

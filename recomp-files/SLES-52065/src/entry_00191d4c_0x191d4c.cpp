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

// Function: entry_00191d4c
// Address: 0x191d4c - 0x191d70
void entry_00191d4c_0x191d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191d4c_0x191d4c");
#endif

    ctx->pc = 0x191d4cu;

    // 0x191d4c: 0x0  nop
    ctx->pc = 0x191d4cu;
    // NOP
    // 0x191d50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x191d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x191d54: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x191d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x191d58: 0x1062fff2  beq         $v1, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x191D58u;
    {
        const bool branch_taken_0x191d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D58u;
        // 0x191d5c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d58) {
            ctx->pc = 0x191D24u;
            return;
        }
    }
    ctx->pc = 0x191D60u;
    // 0x191d60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191d64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191d68: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x191D68u;
    {
        const bool branch_taken_0x191d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D68u;
        // 0x191d6c: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d68) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191D70u;
}

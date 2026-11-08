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

// Function: entry_0013838c
// Address: 0x13838c - 0x1383b8
void entry_0013838c_0x13838c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013838c_0x13838c");
#endif

    ctx->pc = 0x13838cu;

    // 0x13838c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x13838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x138390: 0x8c770058  lw          $s7, 0x58($v1)
    ctx->pc = 0x138390u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x138394: 0x8c72005c  lw          $s2, 0x5C($v1)
    ctx->pc = 0x138394u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x138398: 0x257082b  sltu        $at, $s2, $s7
    ctx->pc = 0x138398u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x13839c: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x13839Cu;
    {
        const bool branch_taken_0x13839c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13839Cu;
        // 0x1383a0: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13839c) {
            ctx->pc = 0x1384B4u;
            return;
        }
    }
    ctx->pc = 0x1383A4u;
    // 0x1383a4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1383a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1383a8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1383a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1383ac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1383acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1383b0: 0x4a100  sll         $s4, $a0, 4
    ctx->pc = 0x1383b0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1383b4: 0x3a940  sll         $s5, $v1, 5
    ctx->pc = 0x1383b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    ctx->pc = 0x1383b8u;
}

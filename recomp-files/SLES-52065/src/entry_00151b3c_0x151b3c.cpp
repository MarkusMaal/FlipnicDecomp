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

// Function: entry_00151b3c
// Address: 0x151b3c - 0x151b5c
void entry_00151b3c_0x151b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151b3c_0x151b3c");
#endif

    ctx->pc = 0x151b3cu;

    // 0x151b3c: 0x0  nop
    ctx->pc = 0x151b3cu;
    // NOP
    // 0x151b40: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x151b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x151b44: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x151B44u;
    {
        const bool branch_taken_0x151b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151b44) {
            ctx->pc = 0x151B84u;
            return;
        }
    }
    ctx->pc = 0x151B4Cu;
    // 0x151b4c: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x151B4Cu;
    {
        const bool branch_taken_0x151b4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x151b4c) {
            ctx->pc = 0x151B84u;
            return;
        }
    }
    ctx->pc = 0x151B54u;
    // 0x151b54: 0x1200ffe1  beqz        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x151B54u;
    {
        const bool branch_taken_0x151b54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B54u;
        // 0x151b58: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b54) {
            ctx->pc = 0x151ADCu;
            return;
        }
    }
    ctx->pc = 0x151B5Cu;
}

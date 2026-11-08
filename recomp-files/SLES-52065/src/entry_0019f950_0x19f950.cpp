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

// Function: entry_0019f950
// Address: 0x19f950 - 0x19f970
void entry_0019f950_0x19f950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f950_0x19f950");
#endif

    ctx->pc = 0x19f950u;

    // 0x19f950: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f954: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F954u;
    {
        const bool branch_taken_0x19f954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F954u;
        // 0x19f958: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f954) {
            ctx->pc = 0x19F970u;
            return;
        }
    }
    ctx->pc = 0x19F95Cu;
    // 0x19f95c: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x19f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x19f960: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f964: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F964u;
    {
        const bool branch_taken_0x19f964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F964u;
        // 0x19f968: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f964) {
            ctx->pc = 0x19F984u;
            return;
        }
    }
    ctx->pc = 0x19F96Cu;
    // 0x19f96c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f970u;
}

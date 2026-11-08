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

// Function: entry_00161944
// Address: 0x161944 - 0x161968
void entry_00161944_0x161944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161944_0x161944");
#endif

    ctx->pc = 0x161944u;

    // 0x161944: 0x0  nop
    ctx->pc = 0x161944u;
    // NOP
    // 0x161948: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x161948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16194c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16194Cu;
    {
        const bool branch_taken_0x16194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16194Cu;
        // 0x161950: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16194c) {
            ctx->pc = 0x161900u;
            return;
        }
    }
    ctx->pc = 0x161954u;
    // 0x161954: 0x860401f4  lh          $a0, 0x1F4($s0)
    ctx->pc = 0x161954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x161958: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x161958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16195c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16195Cu;
    {
        const bool branch_taken_0x16195c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16195Cu;
        // 0x161960: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16195c) {
            ctx->pc = 0x1619ACu;
            return;
        }
    }
    ctx->pc = 0x161964u;
    // 0x161964: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x161964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x161968u;
}

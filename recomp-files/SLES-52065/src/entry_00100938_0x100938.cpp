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

// Function: entry_00100938
// Address: 0x100938 - 0x100960
void entry_00100938_0x100938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100938_0x100938");
#endif

    ctx->pc = 0x100938u;

    // 0x100938: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x100938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x10093c: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x10093Cu;
    {
        const bool branch_taken_0x10093c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10093Cu;
        // 0x100940: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10093c) {
            ctx->pc = 0x10089Cu;
            return;
        }
    }
    ctx->pc = 0x100944u;
    // 0x100944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x100944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100948: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x100948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10094c: 0x3c05c47a  lui         $a1, 0xC47A
    ctx->pc = 0x10094cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50298 << 16));
    // 0x100950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x100950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x100954: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x100954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x100958: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100958u;
    {
        const bool branch_taken_0x100958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100958u;
        // 0x10095c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100958) {
            ctx->pc = 0x100978u;
            return;
        }
    }
    ctx->pc = 0x100960u;
}

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

// Function: entry_0016087c
// Address: 0x16087c - 0x1608a0
void entry_0016087c_0x16087c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016087c_0x16087c");
#endif

    ctx->pc = 0x16087cu;

    // 0x16087c: 0x0  nop
    ctx->pc = 0x16087cu;
    // NOP
    // 0x160880: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x160880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160884: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x160884u;
    {
        const bool branch_taken_0x160884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160884u;
        // 0x160888: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160884) {
            ctx->pc = 0x1608D8u;
            return;
        }
    }
    ctx->pc = 0x16088Cu;
    // 0x16088c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160890: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x160890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x160894: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x160894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x160898: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x160898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16089c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16089cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x1608a0u;
}

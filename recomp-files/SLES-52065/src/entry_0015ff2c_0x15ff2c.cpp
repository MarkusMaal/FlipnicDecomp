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

// Function: entry_0015ff2c
// Address: 0x15ff2c - 0x15ff54
void entry_0015ff2c_0x15ff2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ff2c_0x15ff2c");
#endif

    ctx->pc = 0x15ff2cu;

    // 0x15ff2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15ff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ff30: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15ff34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ff34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ff3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15ff40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ff44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15ff48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ff48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff4c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15FF4Cu;
    {
        const bool branch_taken_0x15ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF4Cu;
        // 0x15ff50: 0x24480040  addiu       $t0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff4c) {
            ctx->pc = 0x15FFC4u;
            return;
        }
    }
    ctx->pc = 0x15FF54u;
}

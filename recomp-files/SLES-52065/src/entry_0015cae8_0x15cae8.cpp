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

// Function: entry_0015cae8
// Address: 0x15cae8 - 0x15cb08
void entry_0015cae8_0x15cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cae8_0x15cae8");
#endif

    ctx->pc = 0x15cae8u;

    // 0x15cae8: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15cae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15caec: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x15CAECu;
    {
        const bool branch_taken_0x15caec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAECu;
        // 0x15caf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15caec) {
            ctx->pc = 0x15CB6Cu;
            return;
        }
    }
    ctx->pc = 0x15CAF4u;
    // 0x15caf4: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15caf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15caf8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x15CAF8u;
    {
        const bool branch_taken_0x15caf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF8u;
        // 0x15cafc: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15caf8) {
            ctx->pc = 0x15CB40u;
            return;
        }
    }
    ctx->pc = 0x15CB00u;
    // 0x15cb00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15cb00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15cb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15cb08u;
}

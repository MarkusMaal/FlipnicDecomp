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

// Function: entry_00120b8c
// Address: 0x120b8c - 0x120bb4
void entry_00120b8c_0x120b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120b8c_0x120b8c");
#endif

    ctx->pc = 0x120b8cu;

    // 0x120b8c: 0x97c40038  lhu         $a0, 0x38($fp)
    ctx->pc = 0x120b8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x120b90: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x120b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120b94: 0x308400b0  andi        $a0, $a0, 0xB0
    ctx->pc = 0x120b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)176);
    // 0x120b98: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x120b98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x120b9c: 0x12030022  beq         $s0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x120B9Cu;
    {
        const bool branch_taken_0x120b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x120BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B9Cu;
        // 0x120ba0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b9c) {
            ctx->pc = 0x120C28u;
            return;
        }
    }
    ctx->pc = 0x120BA4u;
    // 0x120ba4: 0x12030020  beq         $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x120BA4u;
    {
        const bool branch_taken_0x120ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x120BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BA4u;
        // 0x120ba8: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ba4) {
            ctx->pc = 0x120C28u;
            return;
        }
    }
    ctx->pc = 0x120BACu;
    // 0x120bac: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x120BACu;
    {
        const bool branch_taken_0x120bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BACu;
        // 0x120bb0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bac) {
            ctx->pc = 0x120C28u;
            return;
        }
    }
    ctx->pc = 0x120BB4u;
}

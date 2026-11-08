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

// Function: entry_001feaac
// Address: 0x1feaac - 0x1fead8
void entry_001feaac_0x1feaac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feaac_0x1feaac");
#endif

    ctx->pc = 0x1feaacu;

    // 0x1feaac: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1feaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1feab0: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x1feab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x1feab4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1feab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1feab8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1feab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1feabc: 0x2ca4001f  sltiu       $a0, $a1, 0x1F
    ctx->pc = 0x1feabcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1feac0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEAC0u;
    {
        const bool branch_taken_0x1feac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAC0u;
        // 0x1feac4: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feac0) {
            ctx->pc = 0x1FEAD8u;
            return;
        }
    }
    ctx->pc = 0x1FEAC8u;
    // 0x1feac8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1feac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1feacc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1feaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1fead0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEAD0u;
    {
        const bool branch_taken_0x1fead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAD0u;
        // 0x1fead4: 0xa2a024  and         $s4, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fead0) {
            ctx->pc = 0x1FEADCu;
            return;
        }
    }
    ctx->pc = 0x1FEAD8u;
}

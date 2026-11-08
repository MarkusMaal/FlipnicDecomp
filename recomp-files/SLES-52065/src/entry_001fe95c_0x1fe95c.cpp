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

// Function: entry_001fe95c
// Address: 0x1fe95c - 0x1fe998
void entry_001fe95c_0x1fe95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe95c_0x1fe95c");
#endif

    ctx->pc = 0x1fe95cu;

    // 0x1fe95c: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x1fe95cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1fe960: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1fe960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fe964: 0x3051f000  andi        $s1, $v0, 0xF000
    ctx->pc = 0x1fe964u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1fe968: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fe968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe96c: 0x3a232000  xori        $v1, $s1, 0x2000
    ctx->pc = 0x1fe96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8192);
    // 0x1fe970: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE970u;
    {
        const bool branch_taken_0x1fe970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE970u;
        // 0x1fe974: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe970) {
            ctx->pc = 0x1FE998u;
            return;
        }
    }
    ctx->pc = 0x1FE978u;
    // 0x1fe978: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fe978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fe97c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1fe97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1fe980: 0x24421908  addiu       $v0, $v0, 0x1908
    ctx->pc = 0x1fe980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6408));
    // 0x1fe984: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE984u;
    {
        const bool branch_taken_0x1fe984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE984u;
        // 0x1fe988: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe984) {
            ctx->pc = 0x1FE99Cu;
            return;
        }
    }
    ctx->pc = 0x1FE98Cu;
    // 0x1fe98c: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x1fe98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x1fe990: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE990u;
    {
        const bool branch_taken_0x1fe990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE990u;
        // 0x1fe994: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe990) {
            ctx->pc = 0x1FE9A0u;
            return;
        }
    }
    ctx->pc = 0x1FE998u;
}

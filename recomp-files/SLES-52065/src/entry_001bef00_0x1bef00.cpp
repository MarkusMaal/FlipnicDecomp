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

// Function: entry_001bef00
// Address: 0x1bef00 - 0x1bef34
void entry_001bef00_0x1bef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bef00_0x1bef00");
#endif

    ctx->pc = 0x1bef00u;

    // 0x1bef00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bef00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bef04: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x1bef04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bef08: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BEF08u;
    {
        const bool branch_taken_0x1bef08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF08u;
        // 0x1bef0c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef08) {
            ctx->pc = 0x1BEEDCu;
            return;
        }
    }
    ctx->pc = 0x1BEF10u;
    // 0x1bef10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bef10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bef14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1bef14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1bef18: 0x8c23f4e8  lw          $v1, -0xB18($at)
    ctx->pc = 0x1bef18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bef1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bef20: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1bef20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bef24: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1bef24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bef28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bef2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BEF2Cu;
    {
        const bool branch_taken_0x1bef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF2Cu;
        // 0x1bef30: 0xe4430074  swc1        $f3, 0x74($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef2c) {
            ctx->pc = 0x1BEF98u;
            return;
        }
    }
    ctx->pc = 0x1BEF34u;
}

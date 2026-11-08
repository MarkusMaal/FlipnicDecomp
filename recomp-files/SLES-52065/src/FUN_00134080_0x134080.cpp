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

// Function: FUN_00134080
// Address: 0x134080 - 0x13409c
void FUN_00134080_0x134080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134080_0x134080");
#endif

    ctx->pc = 0x134080u;

    // 0x134080: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x134080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x134084: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x134084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x134088: 0xe44c0010  swc1        $f12, 0x10($v0)
    ctx->pc = 0x134088u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x13408c: 0xe44d0014  swc1        $f13, 0x14($v0)
    ctx->pc = 0x13408cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x134090: 0xe44e0018  swc1        $f14, 0x18($v0)
    ctx->pc = 0x134090u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x134094: 0x804d06c  j           func_1341B0
    ctx->pc = 0x134094u;
    ctx->pc = 0x134098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134094u;
    // 0x134098: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1341B0u;
    FUN_001341b0_0x1341b0(rdram, ctx, runtime); return;
    ctx->pc = 0x13409Cu;
}

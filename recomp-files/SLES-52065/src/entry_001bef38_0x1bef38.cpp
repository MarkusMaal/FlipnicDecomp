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

// Function: entry_001bef38
// Address: 0x1bef38 - 0x1bef5c
void entry_001bef38_0x1bef38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bef38_0x1bef38");
#endif

    ctx->pc = 0x1bef38u;

    // 0x1bef38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bef38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef3c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x1bef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x1bef40: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x1bef40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x1bef44: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x1bef44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1bef48: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x1bef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x1bef4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bef4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bef50: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1bef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1bef54: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1bef54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1bef58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bef58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1bef5cu;
}

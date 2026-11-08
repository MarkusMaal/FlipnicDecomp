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

// Function: entry_001fffec
// Address: 0x1fffec - 0x200000
void entry_001fffec_0x1fffec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fffec_0x1fffec");
#endif

    ctx->pc = 0x1fffecu;

    // 0x1fffec: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x1fffecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1ffff0: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1ffff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1ffff4: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x1ffff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1ffff8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1ffff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ffffc: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x1ffffcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200000u;
}

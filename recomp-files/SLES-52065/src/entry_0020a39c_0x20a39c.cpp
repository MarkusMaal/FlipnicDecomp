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

// Function: entry_0020a39c
// Address: 0x20a39c - 0x20a3e8
void entry_0020a39c_0x20a39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a39c_0x20a39c");
#endif

    ctx->pc = 0x20a39cu;

    // 0x20a39c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x20a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x20a3a0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x20a3a4: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x20a3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x20a3a8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x20a3a8u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 4));
    // 0x20a3ac: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x20a3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x20a3b0: 0x34c60090  ori         $a2, $a2, 0x90
    ctx->pc = 0x20a3b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)144);
    // 0x20a3b4: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x20a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x20a3b8: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x20a3b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20a3bc: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x20a3bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
    // 0x20a3c0: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x20a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x20a3c4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x20a3c4u;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x20a3c8: 0x348400e0  ori         $a0, $a0, 0xE0
    ctx->pc = 0x20a3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)224);
    // 0x20a3cc: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x20a3ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20a3d0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x20a3d0u;
    runtime->Store64(rdram, ctx, 0x12000090u, GPR_U64(ctx, 2));
    // 0x20a3d4: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x20a3d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20a3d8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x20a3d8u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x20a3dc: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x20a3dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20a3e0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x20a3e0u;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 2));
    // 0x20a3e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x20a3e8u;
}

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

// Function: entry_001fc284
// Address: 0x1fc284 - 0x1fc2c4
void entry_001fc284_0x1fc284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc284_0x1fc284");
#endif

    ctx->pc = 0x1fc284u;

    // 0x1fc284: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x1fc284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x1fc288: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1fc288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc28c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1fc28cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1fc290: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC290u;
    {
        const bool branch_taken_0x1fc290 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1fc290) {
            ctx->pc = 0x1FC294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC290u;
            // 0x1fc294: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC2C4u;
            return;
        }
    }
    ctx->pc = 0x1FC298u;
    // 0x1fc298: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1fc29c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fc29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fc2a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fc2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fc2a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fc2a8: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x1fc2a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x1fc2ac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1fc2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1fc2b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc2b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fc2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc2b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fc2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1fc2bc: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x1fc2bcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x1fc2c0: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x1fc2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
    ctx->pc = 0x1fc2c4u;
}

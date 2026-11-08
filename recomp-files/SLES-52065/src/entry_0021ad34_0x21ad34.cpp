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

// Function: entry_0021ad34
// Address: 0x21ad34 - 0x21ad98
void entry_0021ad34_0x21ad34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ad34_0x21ad34");
#endif

    ctx->pc = 0x21ad34u;

    // 0x21ad34: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x21ad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
    // 0x21ad38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ad38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21ad3c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x21ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x21ad40: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21AD40u;
    {
        const bool branch_taken_0x21ad40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ad40) {
            ctx->pc = 0x21AD98u;
            return;
        }
    }
    ctx->pc = 0x21AD48u;
    // 0x21ad48: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x21ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x21ad4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21ad50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ad54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ad54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21ad58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ad58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ad5c: 0x2404f3ff  addiu       $a0, $zero, -0xC01
    ctx->pc = 0x21ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x21ad60: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ad60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ad64: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ad64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ad68: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ad68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ad6c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ad6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ad70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ad74: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x21ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x21ad78: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x21ad78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
    // 0x21ad7c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21ad7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21ad80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21ad80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21ad84: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21ad84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21ad88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21ad88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21ad8c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x21ad8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x21ad90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21ad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21ad94: 0xfd024700  sd          $v0, 0x4700($t0)
    ctx->pc = 0x21ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 18176), GPR_U64(ctx, 2));
    ctx->pc = 0x21ad98u;
}

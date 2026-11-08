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

// Function: caseD_5
// Address: 0x12464c - 0x124680
void caseD_5_0x12464c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x12464c");
#endif

    ctx->pc = 0x12464cu;

    // 0x12464c: 0x0  nop
    ctx->pc = 0x12464cu;
    // NOP
    // 0x124650: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x124650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x124654: 0xde450078  ld          $a1, 0x78($s2)
    ctx->pc = 0x124654u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x124658: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x124658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x12465c: 0x32538  dsll        $a0, $v1, 20
    ctx->pc = 0x12465cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 20);
    // 0x124660: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x124660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124664: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x124664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x124668: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x124668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12466c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12466cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124670: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x124670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x124674: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x124674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124678: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x124678u;
    {
        const bool branch_taken_0x124678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124678u;
        // 0x12467c: 0xfe420078  sd          $v0, 0x78($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124678) {
            ctx->pc = 0x1246B4u;
            return;
        }
    }
    ctx->pc = 0x124680u;
}

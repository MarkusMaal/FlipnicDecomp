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

// Function: caseD_2
// Address: 0x1245c4 - 0x1245f8
void caseD_2_0x1245c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1245c4");
#endif

    ctx->pc = 0x1245c4u;

    // 0x1245c4: 0x0  nop
    ctx->pc = 0x1245c4u;
    // NOP
    // 0x1245c8: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x1245c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x1245cc: 0xde450070  ld          $a1, 0x70($s2)
    ctx->pc = 0x1245ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1245d0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1245d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1245d4: 0x32538  dsll        $a0, $v1, 20
    ctx->pc = 0x1245d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 20);
    // 0x1245d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1245d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1245dc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1245dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1245e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1245e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1245e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1245e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1245e8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1245e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1245ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1245ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1245f0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1245F0u;
    {
        const bool branch_taken_0x1245f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245F0u;
        // 0x1245f4: 0xfe420070  sd          $v0, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245f0) {
            ctx->pc = 0x1246B4u;
            return;
        }
    }
    ctx->pc = 0x1245F8u;
}

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

// Function: caseD_3
// Address: 0x1245f8 - 0x124630
void caseD_3_0x1245f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1245f8");
#endif

    ctx->pc = 0x1245f8u;

    // 0x1245f8: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x1245f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x1245fc: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x1245fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x124600: 0xde450070  ld          $a1, 0x70($s2)
    ctx->pc = 0x124600u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x124604: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x124604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x124608: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x124608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x12460c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12460cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124610: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x124610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x124614: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x124614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x124618: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x124618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12461c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124620: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x124620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x124624: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x124624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124628: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x124628u;
    {
        const bool branch_taken_0x124628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124628u;
        // 0x12462c: 0xfe420070  sd          $v0, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124628) {
            ctx->pc = 0x1246B4u;
            return;
        }
    }
    ctx->pc = 0x124630u;
}

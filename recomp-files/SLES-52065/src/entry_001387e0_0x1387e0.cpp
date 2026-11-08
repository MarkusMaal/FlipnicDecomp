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

// Function: entry_001387e0
// Address: 0x1387e0 - 0x13881c
void entry_001387e0_0x1387e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001387e0_0x1387e0");
#endif

    ctx->pc = 0x1387e0u;

    // 0x1387e0: 0x34038022  ori         $v1, $zero, 0x8022
    ctx->pc = 0x1387e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32802);
    // 0x1387e4: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x1387e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1387e8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1387e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1387ec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1387ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1387f0: 0x34452521  ori         $a1, $v0, 0x2521
    ctx->pc = 0x1387f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9505);
    // 0x1387f4: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1387f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1387f8: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1387f8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1387fc: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x1387fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x138800: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x138800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x138804: 0xfe850008  sd          $a1, 0x8($s4)
    ctx->pc = 0x138804u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 5));
    // 0x138808: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x138808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13880c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x138810: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x138810u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x138814: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x138814u;
    {
        const bool branch_taken_0x138814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138814u;
        // 0x138818: 0xfe850018  sd          $a1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138814) {
            ctx->pc = 0x138924u;
            return;
        }
    }
    ctx->pc = 0x13881Cu;
}

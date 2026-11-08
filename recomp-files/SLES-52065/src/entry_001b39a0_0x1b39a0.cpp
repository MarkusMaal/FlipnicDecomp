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

// Function: entry_001b39a0
// Address: 0x1b39a0 - 0x1b3a0c
void entry_001b39a0_0x1b39a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b39a0_0x1b39a0");
#endif

    switch (ctx->pc) {
        case 0x1b3a08u: goto label_1b3a08;
        default: break;
    }

    ctx->pc = 0x1b39a0u;

    // 0x1b39a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b39a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b39a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b39a8: 0x8e822780  lw          $v0, 0x2780($s4)
    ctx->pc = 0x1b39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10112)));
    // 0x1b39ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b39acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b39b0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1b39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b39b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b39b8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b39bc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1b39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b39c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b39c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b39c4: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x1b39c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x1b39c8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1b39c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b39cc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b39ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b39d0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1b39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1b39d4: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1b39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b39d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b39dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b39e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b39e4: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1b39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1b39e8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1b39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1b39ec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1b39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1b39f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b39f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b39f8: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x1b39f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1b39fc: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1b39fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1b3a00: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1B3A00u;
    SET_GPR_U32(ctx, 31, 0x1B3A08u);
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1B3A00u, 0x1B3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A08u;
label_1b3a08:
    // 0x1b3a08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b3a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1b3a0cu;
}

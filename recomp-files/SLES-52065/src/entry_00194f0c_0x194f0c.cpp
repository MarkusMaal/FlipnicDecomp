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

// Function: entry_00194f0c
// Address: 0x194f0c - 0x194f58
void entry_00194f0c_0x194f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194f0c_0x194f0c");
#endif

    ctx->pc = 0x194f0cu;

    // 0x194f0c: 0x0  nop
    ctx->pc = 0x194f0cu;
    // NOP
    // 0x194f10: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x194f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x194f14: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x194f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x194f18: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x194f18u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x194f1c: 0x8cc528dc  lw          $a1, 0x28DC($a2)
    ctx->pc = 0x194f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10460)));
    // 0x194f20: 0x84c328d8  lh          $v1, 0x28D8($a2)
    ctx->pc = 0x194f20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10456)));
    // 0x194f24: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x194f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x194f28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x194f2c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x194f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x194f30: 0x3012  mflo        $a2
    ctx->pc = 0x194f30u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x194f34: 0xdc832818  ld          $v1, 0x2818($a0)
    ctx->pc = 0x194f34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
    // 0x194f38: 0x2810  mfhi        $a1
    ctx->pc = 0x194f38u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x194f3c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x194f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x194f40: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x194f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x194f44: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x194f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x194f48: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x194f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x194f4c: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x194f4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x194f50: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x194F50u;
    {
        const bool branch_taken_0x194f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F50u;
        // 0x194f54: 0xfc832818  sd          $v1, 0x2818($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 10264), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f50) {
            ctx->pc = 0x19502Cu;
            return;
        }
    }
    ctx->pc = 0x194F58u;
}

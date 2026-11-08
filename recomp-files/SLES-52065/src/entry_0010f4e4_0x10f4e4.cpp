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

// Function: entry_0010f4e4
// Address: 0x10f4e4 - 0x10f52c
void entry_0010f4e4_0x10f4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f4e4_0x10f4e4");
#endif

    switch (ctx->pc) {
        case 0x10f4f0u: goto label_10f4f0;
        default: break;
    }

    ctx->pc = 0x10f4e4u;

    // 0x10f4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4e8: 0xc042118  jal         func_108460
    ctx->pc = 0x10F4E8u;
    SET_GPR_U32(ctx, 31, 0x10F4F0u);
    ctx->pc = 0x10F4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4E8u;
    // 0x10f4ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10F4E8u, 0x10F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4F0u;
label_10f4f0:
    // 0x10f4f0: 0x92050224  lbu         $a1, 0x224($s0)
    ctx->pc = 0x10f4f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f4f4: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x10f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x10f4f8: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x10f4f8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x10f4fc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f500: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f504: 0xa2030224  sb          $v1, 0x224($s0)
    ctx->pc = 0x10f504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 3));
    // 0x10f508: 0x92050224  lbu         $a1, 0x224($s0)
    ctx->pc = 0x10f508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f50c: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x10f50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x10f510: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F510u;
    {
        const bool branch_taken_0x10f510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F510u;
        // 0x10f514: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f510) {
            ctx->pc = 0x10F52Cu;
            return;
        }
    }
    ctx->pc = 0x10F518u;
    // 0x10f518: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x10f518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10f51c: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x10f51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x10f520: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f524: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f528: 0xa2030224  sb          $v1, 0x224($s0)
    ctx->pc = 0x10f528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10f52cu;
}

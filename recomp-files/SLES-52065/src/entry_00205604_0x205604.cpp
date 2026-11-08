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

// Function: entry_00205604
// Address: 0x205604 - 0x205624
void entry_00205604_0x205604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205604_0x205604");
#endif

    ctx->pc = 0x205604u;

    // 0x205604: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x205604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x205608: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x205608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20560c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x205610: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x205610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205614: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x205614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x205618: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x205618u;
    {
        const bool branch_taken_0x205618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205618) {
            ctx->pc = 0x20561Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205618u;
            // 0x20561c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2055D8u;
            return;
        }
    }
    ctx->pc = 0x205620u;
    // 0x205620: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x205620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    ctx->pc = 0x205624u;
}

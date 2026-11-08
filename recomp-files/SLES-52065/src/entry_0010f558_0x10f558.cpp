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

// Function: entry_0010f558
// Address: 0x10f558 - 0x10f58c
void entry_0010f558_0x10f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f558_0x10f558");
#endif

    ctx->pc = 0x10f558u;

    // 0x10f558: 0x92050224  lbu         $a1, 0x224($s0)
    ctx->pc = 0x10f558u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f55c: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x10f55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x10f560: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x10F560u;
    {
        const bool branch_taken_0x10f560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F560u;
        // 0x10f564: 0x51ebc  dsll32      $v1, $a1, 26 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f560) {
            ctx->pc = 0x10F5ACu;
            return;
        }
    }
    ctx->pc = 0x10F568u;
    // 0x10f568: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10f568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x10f56c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F56Cu;
    {
        const bool branch_taken_0x10f56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f56c) {
            ctx->pc = 0x10F58Cu;
            return;
        }
    }
    ctx->pc = 0x10F574u;
    // 0x10f574: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x10f574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x10f578: 0x64040008  daddiu      $a0, $zero, 0x8
    ctx->pc = 0x10f578u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x10f57c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f580: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f584: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10F584u;
    {
        const bool branch_taken_0x10f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F584u;
        // 0x10f588: 0xa2030224  sb          $v1, 0x224($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f584) {
            ctx->pc = 0x10F5ACu;
            return;
        }
    }
    ctx->pc = 0x10F58Cu;
}

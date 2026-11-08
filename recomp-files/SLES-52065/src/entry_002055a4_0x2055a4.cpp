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

// Function: entry_002055a4
// Address: 0x2055a4 - 0x2055d8
void entry_002055a4_0x2055a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002055a4_0x2055a4");
#endif

    ctx->pc = 0x2055a4u;

    // 0x2055a4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2055A4u;
    {
        const bool branch_taken_0x2055a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2055A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055A4u;
        // 0x2055a8: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055a4) {
            ctx->pc = 0x205624u;
            return;
        }
    }
    ctx->pc = 0x2055ACu;
    // 0x2055ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2055acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2055b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2055b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2055b4: 0x24454dd1  addiu       $a1, $v0, 0x4DD1
    ctx->pc = 0x2055b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
    // 0x2055b8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2055b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2055bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2055bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2055c0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2055c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2055c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2055c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2055c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2055C8u;
    {
        const bool branch_taken_0x2055c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055c8) {
            ctx->pc = 0x205624u;
            return;
        }
    }
    ctx->pc = 0x2055D0u;
    // 0x2055d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2055d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2055d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2055d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x2055d8u;
}

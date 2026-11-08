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

// Function: entry_001de6d0
// Address: 0x1de6d0 - 0x1de728
void entry_001de6d0_0x1de6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de6d0_0x1de6d0");
#endif

    ctx->pc = 0x1de6d0u;

    // 0x1de6d0: 0x112a03  sra         $a1, $s1, 8
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 8));
    // 0x1de6d4: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x1de6d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1de6d8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1de6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1de6dc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1de6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1de6e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1de6e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1de6e4: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x1de6e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1de6e8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x1de6e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1de6ec: 0x70451018  mult1       $v0, $v0, $a1
    ctx->pc = 0x1de6ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1de6f0: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1de6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1de6f4: 0x24a5732c  addiu       $a1, $a1, 0x732C
    ctx->pc = 0x1de6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29484));
    // 0x1de6f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1de6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38732Cu));
    // 0x1de6fc: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x1de6fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1de700: 0x642007  srav        $a0, $a0, $v1
    ctx->pc = 0x1de700u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1de704: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1de704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1de708: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1de708u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x1de70c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1de70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1de710: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x1de710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1de714: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE714u;
    {
        const bool branch_taken_0x1de714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de714) {
            ctx->pc = 0x1DE718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE714u;
            // 0x1de718: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE728u;
            return;
        }
    }
    ctx->pc = 0x1DE71Cu;
    // 0x1de71c: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x1de71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1de720: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1de720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1de724: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1de724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x1de728u;
}

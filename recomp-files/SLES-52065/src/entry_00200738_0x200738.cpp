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

// Function: entry_00200738
// Address: 0x200738 - 0x20077c
void entry_00200738_0x200738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200738_0x200738");
#endif

    ctx->pc = 0x200738u;

    // 0x200738: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x200738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x20073c: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x20073Cu;
    {
        const bool branch_taken_0x20073c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x200740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20073Cu;
        // 0x200740: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20073c) {
            ctx->pc = 0x2007A8u;
            return;
        }
    }
    ctx->pc = 0x200744u;
    // 0x200744: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x200744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x200748: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x200748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x20074c: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x200750: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x200750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x200754: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x200754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x200758: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x200758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x20075c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20075cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x200760: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x200760u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x200764: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x200764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x200768: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x200768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x20076c: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x20076cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x200770: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x200770u;
    {
        const bool branch_taken_0x200770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200770u;
        // 0x200774: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200770) {
            ctx->pc = 0x20077Cu;
            return;
        }
    }
    ctx->pc = 0x200778u;
    // 0x200778: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x200778u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    ctx->pc = 0x20077cu;
}

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

// Function: entry_001feda8
// Address: 0x1feda8 - 0x1fee20
void entry_001feda8_0x1feda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feda8_0x1feda8");
#endif

    switch (ctx->pc) {
        case 0x1fedd0u: goto label_1fedd0;
        default: break;
    }

    ctx->pc = 0x1feda8u;

    // 0x1feda8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1feda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1fedac: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x1fedacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1fedb0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1fedb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1fedb4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1fedb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fedb8: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x1fedb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x1fedbc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fedbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fedc0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1fedc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1fedc4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1fedc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fedc8: 0xc0804a2  jal         func_201288
    ctx->pc = 0x1FEDC8u;
    SET_GPR_U32(ctx, 31, 0x1FEDD0u);
    ctx->pc = 0x1FEDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEDC8u;
    // 0x1fedcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201288u, 0x1FEDC8u, 0x1FEDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEDD0u;
label_1fedd0:
    // 0x1fedd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fedd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fedd4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fedd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fedd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1feddc: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1FEDDCu;
    {
        const bool branch_taken_0x1feddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDDCu;
        // 0x1fede0: 0x911023  subu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feddc) {
            ctx->pc = 0x1FEE94u;
            return;
        }
    }
    ctx->pc = 0x1FEDE4u;
    // 0x1fede4: 0x8fc3ddf8  lw          $v1, -0x2208($fp)
    ctx->pc = 0x1fede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294958584)));
    // 0x1fede8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fedec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1fedecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1fedf0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1fedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fedf4: 0x24a4d9c8  addiu       $a0, $a1, -0x2638
    ctx->pc = 0x1fedf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957512));
    // 0x1fedf8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fedf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fedfc: 0xafc3ddf8  sw          $v1, -0x2208($fp)
    ctx->pc = 0x1fedfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294958584), GPR_U32(ctx, 3));
    // 0x1fee00: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1fee00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1fee04: 0x12840017  beq         $s4, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FEE04u;
    {
        const bool branch_taken_0x1fee04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE04u;
        // 0x1fee08: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee04) {
            ctx->pc = 0x1FEE64u;
            return;
        }
    }
    ctx->pc = 0x1FEE0Cu;
    // 0x1fee0c: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x1fee0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1fee10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEE10u;
    {
        const bool branch_taken_0x1fee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE10u;
        // 0x1fee14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee10) {
            ctx->pc = 0x1FEE20u;
            return;
        }
    }
    ctx->pc = 0x1FEE18u;
    // 0x1fee18: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1FEE18u;
    {
        const bool branch_taken_0x1fee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE18u;
        // 0x1fee1c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee18) {
            ctx->pc = 0x1FEE94u;
            return;
        }
    }
    ctx->pc = 0x1FEE20u;
}

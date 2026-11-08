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

// Function: FUN_0013fd50
// Address: 0x13fd50 - 0x13fefc
void FUN_0013fd50_0x13fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013fd50_0x13fd50");
#endif

    switch (ctx->pc) {
        case 0x13fdd4u: goto label_13fdd4;
        case 0x13fef0u: goto label_13fef0;
        default: break;
    }

    ctx->pc = 0x13fd50u;

    // 0x13fd50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13fd54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13fd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13fd58: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x13fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x13fd5c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x13fd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13fd60: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x13fd60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13fd64: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x13FD64u;
    {
        const bool branch_taken_0x13fd64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD64u;
        // 0x13fd68: 0xa6082b  sltu        $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd64) {
            ctx->pc = 0x13FDDCu;
            goto label_13fddc;
        }
    }
    ctx->pc = 0x13FD6Cu;
    // 0x13fd6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13fd70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fd74: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13fd78: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x13fd78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13fd7c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FD7Cu;
    {
        const bool branch_taken_0x13fd7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd7c) {
            ctx->pc = 0x13FDA4u;
            goto label_13fda4;
        }
    }
    ctx->pc = 0x13FD84u;
    // 0x13fd84: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13fd88: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x13fd88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13fd8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x13fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13fd90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fd94: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13fd98: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x13fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x13fd9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13FD9Cu;
    {
        const bool branch_taken_0x13fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD9Cu;
        // 0x13fda0: 0xafa60024  sw          $a2, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd9c) {
            ctx->pc = 0x13FDC4u;
            goto label_13fdc4;
        }
    }
    ctx->pc = 0x13FDA4u;
label_13fda4:
    // 0x13fda4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x13fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fda8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x13fda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13fdac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x13fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13fdb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fdb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fdb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13fdbc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x13fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x13fdc0: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x13fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
label_13fdc4:
    // 0x13fdc4: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x13fdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13fdc8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x13fdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdcc: 0xc05032c  jal         func_140CB0
    ctx->pc = 0x13FDCCu;
    SET_GPR_U32(ctx, 31, 0x13FDD4u);
    ctx->pc = 0x13FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDCCu;
    // 0x13fdd0: 0x27a7001c  addiu       $a3, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140CB0u, 0x13FDCCu, 0x13FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDD4u;
label_13fdd4:
    // 0x13fdd4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x13FDD4u;
    {
        const bool branch_taken_0x13fdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDD4u;
        // 0x13fdd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdd4) {
            ctx->pc = 0x13FEF4u;
            goto label_13fef4;
        }
    }
    ctx->pc = 0x13FDDCu;
label_13fddc:
    // 0x13fddc: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x13FDDCu;
    {
        const bool branch_taken_0x13fddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fddc) {
            ctx->pc = 0x13FEF0u;
            goto label_13fef0;
        }
    }
    ctx->pc = 0x13FDE4u;
    // 0x13fde4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x13fde4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13fde8: 0x27a80054  addiu       $t0, $sp, 0x54
    ctx->pc = 0x13fde8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x13fdec: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x13fdecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13fdf0: 0x27a90058  addiu       $t1, $sp, 0x58
    ctx->pc = 0x13fdf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x13fdf4: 0x27a20074  addiu       $v0, $sp, 0x74
    ctx->pc = 0x13fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x13fdf8: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x13fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x13fdfc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x13fdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13fe00: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x13fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x13fe04: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13fe08: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x13fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x13fe0c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x13fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x13fe10: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x13fe10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fe14: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x13fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x13fe18: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x13fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13fe1c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x13fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x13fe20: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x13fe20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13fe24: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13fe28: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13fe28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fe2c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x13fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13fe30: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x13fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x13fe34: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x13fe34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fe38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fe3c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x13fe3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fe40: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x13fe40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13fe44: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x13fe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13fe48: 0xc7282b  sltu        $a1, $a2, $a3
    ctx->pc = 0x13fe48u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13fe4c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13FE4Cu;
    {
        const bool branch_taken_0x13fe4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fe4c) {
            ctx->pc = 0x13FE58u;
            goto label_13fe58;
        }
    }
    ctx->pc = 0x13FE54u;
    // 0x13fe54: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x13fe54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_13fe58:
    // 0x13fe58: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x13fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fe5c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13fe60: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x13fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x13fe64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13fe68: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x13fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x13fe6c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fe70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x13fe74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fe78: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x13fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x13fe7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fe80: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x13fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x13fe84: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13fe88: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13fe8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fe90: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13fe94: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x13fe94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13fe98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FE98u;
    {
        const bool branch_taken_0x13fe98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fe98) {
            ctx->pc = 0x13FEC0u;
            goto label_13fec0;
        }
    }
    ctx->pc = 0x13FEA0u;
    // 0x13fea0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13fea4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x13fea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fea8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x13fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13feac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13feb0: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x13feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
    // 0x13feb4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x13feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x13feb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13FEB8u;
    {
        const bool branch_taken_0x13feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEB8u;
        // 0x13febc: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13feb8) {
            ctx->pc = 0x13FEE0u;
            goto label_13fee0;
        }
    }
    ctx->pc = 0x13FEC0u;
label_13fec0:
    // 0x13fec0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x13fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fec4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x13fec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fec8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x13fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13fecc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13feccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fed4: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x13fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
    // 0x13fed8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x13fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x13fedc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x13fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_13fee0:
    // 0x13fee0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13fee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fee4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13fee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13fee8: 0xc050250  jal         func_140940
    ctx->pc = 0x13FEE8u;
    SET_GPR_U32(ctx, 31, 0x13FEF0u);
    ctx->pc = 0x13FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEE8u;
    // 0x13feec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140940u, 0x13FEE8u, 0x13FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEF0u;
label_13fef0:
    // 0x13fef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13fef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fef4:
    // 0x13fef4: 0x3e00008  jr          $ra
    ctx->pc = 0x13FEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEF4u;
        // 0x13fef8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FEFCu;
}

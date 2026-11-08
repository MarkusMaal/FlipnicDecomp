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

// Function: FUN_001fec70
// Address: 0x1fec70 - 0x1feec4
void FUN_001fec70_0x1fec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fec70_0x1fec70");
#endif

    switch (ctx->pc) {
        case 0x1fed1cu: goto label_1fed1c;
        case 0x1fedd0u: goto label_1fedd0;
        case 0x1fee64u: goto label_1fee64;
        default: break;
    }

    ctx->pc = 0x1fec70u;

    // 0x1fec70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1fec74: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fec78: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1fec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1fec7c: 0x2442d9c8  addiu       $v0, $v0, -0x2638
    ctx->pc = 0x1fec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957512));
    // 0x1fec80: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1fec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1fec84: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1fec84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1fec88: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1fec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1fec8c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1fec8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1fec90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1fec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1fec94: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1fec94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1fec98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fec9c: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1fec9cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x1feca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1feca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1feca4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1feca4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feca8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1feca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1fecac: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1fecacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x1fecb0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1fecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1fecb4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1fecb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x1fecb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fecb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fecbc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1fecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1fecc0: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x1fecc0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fecc4: 0xdcc3ddd8  ld          $v1, -0x2228($a2)
    ctx->pc = 0x1fecc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4294958552)));
    // 0x1fecc8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1feccc: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x1fecccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1fecd0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1fecd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1fecd4: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x1fecd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1fecd8: 0xc29824  and         $s3, $a2, $v0
    ctx->pc = 0x1fecd8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1fecdc: 0x64a50010  daddiu      $a1, $a1, 0x10
    ctx->pc = 0x1fecdcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)16);
    // 0x1fece0: 0x8ec2dde0  lw          $v0, -0x2220($s6)
    ctx->pc = 0x1fece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958560)));
    // 0x1fece4: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x1fece4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1fece8: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x1fece8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1fecec: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FECECu;
    {
        const bool branch_taken_0x1fecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1FECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECECu;
        // 0x1fecf0: 0x293a821  addu        $s5, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecec) {
            ctx->pc = 0x1FED10u;
            goto label_1fed10;
        }
    }
    ctx->pc = 0x1FECF4u;
    // 0x1fecf4: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1fecf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1fecf8: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x1fecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1fecfc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fed00: 0x64420fff  daddiu      $v0, $v0, 0xFFF
    ctx->pc = 0x1fed00u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4095);
    // 0x1fed04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fed04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fed08: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x1fed08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fed0c: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x1fed0cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_1fed10:
    // 0x1fed10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1fed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed14: 0xc0804a2  jal         func_201288
    ctx->pc = 0x1FED14u;
    SET_GPR_U32(ctx, 31, 0x1FED1Cu);
    ctx->pc = 0x1FED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED14u;
    // 0x1fed18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201288u, 0x1FED14u, 0x1FED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED1Cu;
label_1fed1c:
    // 0x1fed1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fed1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed20: 0x1230005c  beq         $s1, $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1FED20u;
    {
        const bool branch_taken_0x1fed20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1FED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED20u;
        // 0x1fed24: 0x235102b  sltu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed20) {
            ctx->pc = 0x1FEE94u;
            goto label_1fee94;
        }
    }
    ctx->pc = 0x1FED28u;
    // 0x1fed28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FED28u;
    {
        const bool branch_taken_0x1fed28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED28u;
        // 0x1fed2c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed28) {
            ctx->pc = 0x1FED3Cu;
            goto label_1fed3c;
        }
    }
    ctx->pc = 0x1FED30u;
    // 0x1fed30: 0x2484d9c8  addiu       $a0, $a0, -0x2638
    ctx->pc = 0x1fed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957512));
    // 0x1fed34: 0x16840058  bne         $s4, $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1FED34u;
    {
        const bool branch_taken_0x1fed34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED34u;
        // 0x1fed38: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed34) {
            ctx->pc = 0x1FEE98u;
            goto label_1fee98;
        }
    }
    ctx->pc = 0x1FED3Cu;
label_1fed3c:
    // 0x1fed3c: 0x3c1e0022  lui         $fp, 0x22
    ctx->pc = 0x1fed3cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
    // 0x1fed40: 0x8fc2ddf8  lw          $v0, -0x2208($fp)
    ctx->pc = 0x1fed40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21DDF8u));
    // 0x1fed44: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1fed44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fed48: 0x16350008  bne         $s1, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FED48u;
    {
        const bool branch_taken_0x1fed48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x1FED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED48u;
        // 0x1fed4c: 0xafc3ddf8  sw          $v1, -0x2208($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294958584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed48) {
            ctx->pc = 0x1FED6Cu;
            goto label_1fed6c;
        }
    }
    ctx->pc = 0x1FED50u;
    // 0x1fed50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1fed50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1fed54: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1fed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1fed58: 0x24a5d9c8  addiu       $a1, $a1, -0x2638
    ctx->pc = 0x1fed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957512));
    // 0x1fed5c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1fed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1fed60: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1fed60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D9D0u));
    // 0x1fed64: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1FED64u;
    {
        const bool branch_taken_0x1fed64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED64u;
        // 0x1fed68: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed64) {
            ctx->pc = 0x1FEE64u;
            goto label_1fee64;
        }
    }
    ctx->pc = 0x1FED6Cu;
label_1fed6c:
    // 0x1fed6c: 0x8ec2dde0  lw          $v0, -0x2220($s6)
    ctx->pc = 0x1fed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958560)));
    // 0x1fed70: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED70u;
    {
        const bool branch_taken_0x1fed70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1FED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED70u;
        // 0x1fed74: 0x2351023  subu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed70) {
            ctx->pc = 0x1FED80u;
            goto label_1fed80;
        }
    }
    ctx->pc = 0x1FED78u;
    // 0x1fed78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED78u;
    {
        const bool branch_taken_0x1fed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED78u;
        // 0x1fed7c: 0xaed1dde0  sw          $s1, -0x2220($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294958560), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed78) {
            ctx->pc = 0x1FED88u;
            goto label_1fed88;
        }
    }
    ctx->pc = 0x1FED80u;
label_1fed80:
    // 0x1fed80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fed84: 0xafc2ddf8  sw          $v0, -0x2208($fp)
    ctx->pc = 0x1fed84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294958584), GPR_U32(ctx, 2));
label_1fed88:
    // 0x1fed88: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1fed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1fed8c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x1fed8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1fed90: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FED90u;
    {
        const bool branch_taken_0x1fed90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED90u;
        // 0x1fed94: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed90) {
            ctx->pc = 0x1FEDA4u;
            goto label_1feda4;
        }
    }
    ctx->pc = 0x1FED98u;
    // 0x1fed98: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1fed98u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fed9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FED9Cu;
    {
        const bool branch_taken_0x1fed9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED9Cu;
        // 0x1feda0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed9c) {
            ctx->pc = 0x1FEDA8u;
            goto label_1feda8;
        }
    }
    ctx->pc = 0x1FEDA4u;
label_1feda4:
    // 0x1feda4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1feda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feda8:
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
            goto label_1fee94;
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
            goto label_1fee64;
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
            goto label_1fee20;
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
            goto label_1fee94;
        }
    }
    ctx->pc = 0x1FEE20u;
label_1fee20:
    // 0x1fee20: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1fee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1fee24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fee24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fee28: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x1fee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x1fee2c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1fee2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1fee30: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x1fee30u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1fee34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fee34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fee38: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x1fee38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1fee3c: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x1fee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1fee40: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1fee40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x1fee44: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1fee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fee48: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1fee48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1fee4c: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x1fee4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1fee50: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEE50u;
    {
        const bool branch_taken_0x1fee50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE50u;
        // 0x1fee54: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee50) {
            ctx->pc = 0x1FEE64u;
            goto label_1fee64;
        }
    }
    ctx->pc = 0x1FEE58u;
    // 0x1fee58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1fee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee5c: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x1FEE5Cu;
    SET_GPR_U32(ctx, 31, 0x1FEE64u);
    ctx->pc = 0x1FEE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEE5Cu;
    // 0x1fee60: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FEE5Cu, 0x1FEE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEE64u;
label_1fee64:
    // 0x1fee64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1fee64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1fee68: 0x8fc3ddf8  lw          $v1, -0x2208($fp)
    ctx->pc = 0x1fee68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294958584)));
    // 0x1fee6c: 0xdca2dde8  ld          $v0, -0x2218($a1)
    ctx->pc = 0x1fee6cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x21DDE8u));
    // 0x1fee70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1fee70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fee74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEE74u;
    {
        const bool branch_taken_0x1fee74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE74u;
        // 0x1fee78: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee74) {
            ctx->pc = 0x1FEE80u;
            goto label_1fee80;
        }
    }
    ctx->pc = 0x1FEE7Cu;
    // 0x1fee7c: 0xfca3dde8  sd          $v1, -0x2218($a1)
    ctx->pc = 0x1fee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294958568), GPR_U64(ctx, 3));
label_1fee80:
    // 0x1fee80: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fee80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fee84: 0xdc62ddf0  ld          $v0, -0x2210($v1)
    ctx->pc = 0x1fee84u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x21DDF0u));
    // 0x1fee88: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1fee88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fee8c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FEE8Cu;
    {
        const bool branch_taken_0x1fee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fee8c) {
            ctx->pc = 0x1FEE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEE8Cu;
            // 0x1fee90: 0xfc64ddf0  sd          $a0, -0x2210($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 4294958576), GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEE94u;
            goto label_1fee94;
        }
    }
    ctx->pc = 0x1FEE94u;
label_1fee94:
    // 0x1fee94: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fee94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1fee98:
    // 0x1fee98: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1fee98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fee9c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1fee9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1feea0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1feea0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1feea4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1feea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1feea8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1feea8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1feeac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1feeacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1feeb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1feeb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1feeb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1feeb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feeb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feeb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEBCu;
        // 0x1feec0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEEC4u;
}

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

// Function: FUN_0010fc40
// Address: 0x10fc40 - 0x10fdec
void FUN_0010fc40_0x10fc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010fc40_0x10fc40");
#endif

    switch (ctx->pc) {
        case 0x10fce8u: goto label_10fce8;
        case 0x10fcf4u: goto label_10fcf4;
        case 0x10fd1cu: goto label_10fd1c;
        case 0x10fd30u: goto label_10fd30;
        default: break;
    }

    ctx->pc = 0x10fc40u;

    // 0x10fc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10fc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10fc44: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x10fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10fc48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10fc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10fc4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10fc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10fc50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10fc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10fc54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10fc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc58: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x10fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10fc5c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10fc60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10fc64: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10fc64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10fc68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10fc6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10fc70: 0x8c702cd8  lw          $s0, 0x2CD8($v1)
    ctx->pc = 0x10fc70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x10fc74: 0x92040224  lbu         $a0, 0x224($s0)
    ctx->pc = 0x10fc74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10fc78: 0x41efc  dsll32      $v1, $a0, 27
    ctx->pc = 0x10fc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 27));
    // 0x10fc7c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10fc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x10fc80: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x10FC80u;
    {
        const bool branch_taken_0x10fc80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fc80) {
            ctx->pc = 0x10FDD8u;
            goto label_10fdd8;
        }
    }
    ctx->pc = 0x10FC88u;
    // 0x10fc88: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x10fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x10fc8c: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x10fc8cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x10fc90: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10fc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10fc94: 0x30070007  andi        $a3, $zero, 0x7
    ctx->pc = 0x10fc94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x10fc98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10fc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10fc9c: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x10fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10fca0: 0xa2020224  sb          $v0, 0x224($s0)
    ctx->pc = 0x10fca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 2));
    // 0x10fca4: 0x64030010  daddiu      $v1, $zero, 0x10
    ctx->pc = 0x10fca4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x10fca8: 0x92080224  lbu         $t0, 0x224($s0)
    ctx->pc = 0x10fca8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10fcac: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x10fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x10fcb0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x10fcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x10fcb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fcb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcb8: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x10fcb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x10fcbc: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x10fcbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x10fcc0: 0xa2040224  sb          $a0, 0x224($s0)
    ctx->pc = 0x10fcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 4));
    // 0x10fcc4: 0x92040224  lbu         $a0, 0x224($s0)
    ctx->pc = 0x10fcc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10fcc8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10fcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10fccc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10fcd0: 0xa2020224  sb          $v0, 0x224($s0)
    ctx->pc = 0x10fcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 2));
    // 0x10fcd4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x10fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10fcd8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10fcdc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10fce0: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x10FCE0u;
    SET_GPR_U32(ctx, 31, 0x10FCE8u);
    ctx->pc = 0x10FCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCE0u;
    // 0x10fce4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10FCE0u, 0x10FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCE8u;
label_10fce8:
    // 0x10fce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcec: 0xc042118  jal         func_108460
    ctx->pc = 0x10FCECu;
    SET_GPR_U32(ctx, 31, 0x10FCF4u);
    ctx->pc = 0x10FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCECu;
    // 0x10fcf0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10FCECu, 0x10FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCF4u;
label_10fcf4:
    // 0x10fcf4: 0x92030220  lbu         $v1, 0x220($s0)
    ctx->pc = 0x10fcf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x10fcf8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10FCF8u;
    {
        const bool branch_taken_0x10fcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCF8u;
        // 0x10fcfc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcf8) {
            ctx->pc = 0x10FD3Cu;
            goto label_10fd3c;
        }
    }
    ctx->pc = 0x10FD00u;
    // 0x10fd00: 0xa2000220  sb          $zero, 0x220($s0)
    ctx->pc = 0x10fd00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x10fd04: 0x92020220  lbu         $v0, 0x220($s0)
    ctx->pc = 0x10fd04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x10fd08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10FD08u;
    {
        const bool branch_taken_0x10fd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD08u;
        // 0x10fd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd08) {
            ctx->pc = 0x10FD28u;
            goto label_10fd28;
        }
    }
    ctx->pc = 0x10FD10u;
    // 0x10fd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd14: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10FD14u;
    SET_GPR_U32(ctx, 31, 0x10FD1Cu);
    ctx->pc = 0x10FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD14u;
    // 0x10fd18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10FD14u, 0x10FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD1Cu;
label_10fd1c:
    // 0x10fd1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10FD1Cu;
    {
        const bool branch_taken_0x10fd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD1Cu;
        // 0x10fd20: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd1c) {
            ctx->pc = 0x10FD38u;
            goto label_10fd38;
        }
    }
    ctx->pc = 0x10FD24u;
    // 0x10fd24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10fd28:
    // 0x10fd28: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10FD28u;
    SET_GPR_U32(ctx, 31, 0x10FD30u);
    ctx->pc = 0x10FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD28u;
    // 0x10fd2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10FD28u, 0x10FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD30u;
label_10fd30:
    // 0x10fd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fd34: 0xa20301d3  sb          $v1, 0x1D3($s0)
    ctx->pc = 0x10fd34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
label_10fd38:
    // 0x10fd38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fd3c:
    // 0x10fd3c: 0xae030230  sw          $v1, 0x230($s0)
    ctx->pc = 0x10fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 3));
    // 0x10fd40: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x10fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x10fd44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10fd48: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x10fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x10fd4c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x10fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x10fd50: 0x1c60000e  bgtz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x10FD50u;
    {
        const bool branch_taken_0x10fd50 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x10fd50) {
            ctx->pc = 0x10FD8Cu;
            goto label_10fd8c;
        }
    }
    ctx->pc = 0x10FD58u;
    // 0x10fd58: 0x8f848244  lw          $a0, -0x7DBC($gp)
    ctx->pc = 0x10fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935108)));
    // 0x10fd5c: 0x8f838248  lw          $v1, -0x7DB8($gp)
    ctx->pc = 0x10fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935112)));
    // 0x10fd60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10fd64: 0xaf848244  sw          $a0, -0x7DBC($gp)
    ctx->pc = 0x10fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935108), GPR_U32(ctx, 4));
    // 0x10fd68: 0x8f848244  lw          $a0, -0x7DBC($gp)
    ctx->pc = 0x10fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935108)));
    // 0x10fd6c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x10fd6cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10fd70: 0x0  nop
    ctx->pc = 0x10fd70u;
    // NOP
    // 0x10fd74: 0x0  nop
    ctx->pc = 0x10fd74u;
    // NOP
    // 0x10fd78: 0x1810  mfhi        $v1
    ctx->pc = 0x10fd78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x10fd7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FD7Cu;
    {
        const bool branch_taken_0x10fd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fd7c) {
            ctx->pc = 0x10FD8Cu;
            goto label_10fd8c;
        }
    }
    ctx->pc = 0x10FD84u;
    // 0x10fd84: 0x8f838240  lw          $v1, -0x7DC0($gp)
    ctx->pc = 0x10fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935104)));
    // 0x10fd88: 0xac600320  sw          $zero, 0x320($v1)
    ctx->pc = 0x10fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 0));
label_10fd8c:
    // 0x10fd8c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x10fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x10fd90: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10FD90u;
    {
        const bool branch_taken_0x10fd90 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x10fd90) {
            ctx->pc = 0x10FDD8u;
            goto label_10fdd8;
        }
    }
    ctx->pc = 0x10FD98u;
    // 0x10fd98: 0x92260040  lbu         $a2, 0x40($s1)
    ctx->pc = 0x10fd98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x10fd9c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x10FD9Cu;
    {
        const bool branch_taken_0x10fd9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fd9c) {
            ctx->pc = 0x10FDD8u;
            goto label_10fdd8;
        }
    }
    ctx->pc = 0x10FDA4u;
    // 0x10fda4: 0x8e290038  lw          $t1, 0x38($s1)
    ctx->pc = 0x10fda4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x10fda8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10fdac: 0x8e280024  lw          $t0, 0x24($s1)
    ctx->pc = 0x10fdacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10fdb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fdb4: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x10fdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10fdb8: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x10fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10fdbc: 0xace50288  sw          $a1, 0x288($a3)
    ctx->pc = 0x10fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 648), GPR_U32(ctx, 5));
    // 0x10fdc0: 0xa0e0028c  sb          $zero, 0x28C($a3)
    ctx->pc = 0x10fdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 652), (uint8_t)GPR_U32(ctx, 0));
    // 0x10fdc4: 0xace80290  sw          $t0, 0x290($a3)
    ctx->pc = 0x10fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 656), GPR_U32(ctx, 8));
    // 0x10fdc8: 0xace40294  sw          $a0, 0x294($a3)
    ctx->pc = 0x10fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 660), GPR_U32(ctx, 4));
    // 0x10fdcc: 0xa0e60298  sb          $a2, 0x298($a3)
    ctx->pc = 0x10fdccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 664), (uint8_t)GPR_U32(ctx, 6));
    // 0x10fdd0: 0xace9029c  sw          $t1, 0x29C($a3)
    ctx->pc = 0x10fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 668), GPR_U32(ctx, 9));
    // 0x10fdd4: 0xa0e30285  sb          $v1, 0x285($a3)
    ctx->pc = 0x10fdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 645), (uint8_t)GPR_U32(ctx, 3));
label_10fdd8:
    // 0x10fdd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10fdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10fddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fde0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10fde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fde4: 0x3e00008  jr          $ra
    ctx->pc = 0x10FDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDE4u;
        // 0x10fde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FDECu;
}

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

// Function: FUN_001d3920
// Address: 0x1d3920 - 0x1d3bb4
void FUN_001d3920_0x1d3920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3920_0x1d3920");
#endif

    switch (ctx->pc) {
        case 0x1d3998u: goto label_1d3998;
        case 0x1d3a20u: goto label_1d3a20;
        case 0x1d3a88u: goto label_1d3a88;
        case 0x1d3ab0u: goto label_1d3ab0;
        case 0x1d3ad4u: goto label_1d3ad4;
        case 0x1d3af4u: goto label_1d3af4;
        case 0x1d3b30u: goto label_1d3b30;
        case 0x1d3b4cu: goto label_1d3b4c;
        case 0x1d3b68u: goto label_1d3b68;
        default: break;
    }

    ctx->pc = 0x1d3920u;

    // 0x1d3920: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d3920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d3924: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1d3924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d3928: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1d3928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1d392c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d392cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3930: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1d3930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1d3934: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d3934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3938: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1d3938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1d393c: 0x26370028  addiu       $s7, $s1, 0x28
    ctx->pc = 0x1d393cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1d3940: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1d3940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1d3944: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1d3944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1d3948: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1d3948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1d394c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1d394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1d3950: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1d3950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1d3954: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1d3954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1d3958: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1d3958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1d395c: 0x86f60006  lh          $s6, 0x6($s7)
    ctx->pc = 0x1d395cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x1d3960: 0x56001a  div         $zero, $v0, $s6
    ctx->pc = 0x1d3960u;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d3964: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D3964u;
    {
        const bool branch_taken_0x1d3964 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3964) {
            ctx->pc = 0x1D3968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3964u;
            // 0x1d3968: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D396Cu;
            goto label_1d396c;
        }
    }
    ctx->pc = 0x1D396Cu;
label_1d396c:
    // 0x1d396c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1d396cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1d3970: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d3970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d3974: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x1d3974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x1d3978: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d3978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1d397c: 0x1012  mflo        $v0
    ctx->pc = 0x1d397cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1d3980: 0x1ac00068  blez        $s6, . + 4 + (0x68 << 2)
    ctx->pc = 0x1D3980u;
    {
        const bool branch_taken_0x1d3980 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1D3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3980u;
        // 0x1d3984: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3980) {
            ctx->pc = 0x1D3B24u;
            goto label_1d3b24;
        }
    }
    ctx->pc = 0x1D3988u;
    // 0x1d3988: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d398c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1d398cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3990: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1d3990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1d3994: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d3994u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3998:
    // 0x1d3998: 0x8e27023c  lw          $a3, 0x23C($s1)
    ctx->pc = 0x1d3998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x1d399c: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x1d399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x1d39a0: 0xf33018  mult        $a2, $a3, $s3
    ctx->pc = 0x1d39a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d39a4: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1d39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1d39a8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d39ac: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1d39acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1d39b0: 0x8e250234  lw          $a1, 0x234($s1)
    ctx->pc = 0x1d39b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1d39b4: 0x30840040  andi        $a0, $a0, 0x40
    ctx->pc = 0x1d39b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1d39b8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1d39b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1d39bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1d39bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d39c0: 0xae25001c  sw          $a1, 0x1C($s1)
    ctx->pc = 0x1d39c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 5));
    // 0x1d39c4: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x1d39c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x1d39c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D39C8u;
    {
        const bool branch_taken_0x1d39c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39C8u;
        // 0x1d39cc: 0xae270024  sw          $a3, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39c8) {
            ctx->pc = 0x1D39E0u;
            goto label_1d39e0;
        }
    }
    ctx->pc = 0x1D39D0u;
    // 0x1d39d0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1d39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d39d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D39D4u;
    {
        const bool branch_taken_0x1d39d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39D4u;
        // 0x1d39d8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39d4) {
            ctx->pc = 0x1D39E8u;
            goto label_1d39e8;
        }
    }
    ctx->pc = 0x1D39DCu;
    // 0x1d39dc: 0x0  nop
    ctx->pc = 0x1d39dcu;
    // NOP
label_1d39e0:
    // 0x1d39e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d39e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1d39e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d39e8:
    // 0x1d39e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d39e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39ec: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1d39ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d39f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D39F0u;
    {
        const bool branch_taken_0x1d39f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39F0u;
        // 0x1d39f4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39f0) {
            ctx->pc = 0x1D3A50u;
            goto label_1d3a50;
        }
    }
    ctx->pc = 0x1D39F8u;
    // 0x1d39f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d39fc: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1d39fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1d3a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3a04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3a08: 0x54750005  bnel        $v1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3A08u;
    {
        const bool branch_taken_0x1d3a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x1d3a08) {
            ctx->pc = 0x1D3A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3A08u;
            // 0x1d3a0c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3A20u;
            goto label_1d3a20;
        }
    }
    ctx->pc = 0x1D3A10u;
    // 0x1d3a10: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d3a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3a14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d3a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D3A18u;
    {
        const bool branch_taken_0x1d3a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A18u;
        // 0x1d3a1c: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a18) {
            ctx->pc = 0x1D3A50u;
            goto label_1d3a50;
        }
    }
    ctx->pc = 0x1D3A20u;
label_1d3a20:
    // 0x1d3a20: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1d3a20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1d3a24: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d3a28: 0x24e70480  addiu       $a3, $a3, 0x480
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1152));
    // 0x1d3a2c: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x1d3a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d3a30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3A30u;
    {
        const bool branch_taken_0x1d3a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A30u;
        // 0x1d3a34: 0x472021  addu        $a0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a30) {
            ctx->pc = 0x1D3A50u;
            goto label_1d3a50;
        }
    }
    ctx->pc = 0x1D3A38u;
    // 0x1d3a38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3a3c: 0x5455fff8  bnel        $v0, $s5, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D3A3Cu;
    {
        const bool branch_taken_0x1d3a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1d3a3c) {
            ctx->pc = 0x1D3A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3A3Cu;
            // 0x1d3a40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3a20;
        }
    }
    ctx->pc = 0x1D3A44u;
    // 0x1d3a44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3a48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d3a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a4c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1d3a50:
    // 0x1d3a50: 0x10a6004c  beq         $a1, $a2, . + 4 + (0x4C << 2)
    ctx->pc = 0x1D3A50u;
    {
        const bool branch_taken_0x1d3a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A50u;
        // 0x1d3a54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a50) {
            ctx->pc = 0x1D3B84u;
            goto label_1d3b84;
        }
    }
    ctx->pc = 0x1D3A58u;
    // 0x1d3a58: 0x12a03c  dsll32      $s4, $s2, 0
    ctx->pc = 0x1d3a58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1d3a5c: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x1d3a5cu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x1d3a60: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1d3a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d3a64: 0xae340010  sw          $s4, 0x10($s1)
    ctx->pc = 0x1d3a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
    // 0x1d3a68: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x1d3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1d3a6c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1d3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1d3a70: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1d3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1d3a74: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1d3a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3a78: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3A78u;
    {
        const bool branch_taken_0x1d3a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A78u;
        // 0x1d3a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a78) {
            ctx->pc = 0x1D3AA8u;
            goto label_1d3aa8;
        }
    }
    ctx->pc = 0x1D3A80u;
    // 0x1d3a80: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x1D3A80u;
    SET_GPR_U32(ctx, 31, 0x1D3A88u);
    ctx->pc = 0x1D3A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3A80u;
    // 0x1d3a84: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x1D3A80u, 0x1D3A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A88u;
label_1d3a88:
    // 0x1d3a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d3a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d3a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3a90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d3a90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d3a94: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1d3a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d3a98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d3a9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D3A9Cu;
    {
        const bool branch_taken_0x1d3a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A9Cu;
        // 0x1d3aa0: 0x3a28021  addu        $s0, $sp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a9c) {
            ctx->pc = 0x1D3ACCu;
            goto label_1d3acc;
        }
    }
    ctx->pc = 0x1D3AA4u;
    // 0x1d3aa4: 0x0  nop
    ctx->pc = 0x1d3aa4u;
    // NOP
label_1d3aa8:
    // 0x1d3aa8: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x1D3AA8u;
    SET_GPR_U32(ctx, 31, 0x1D3AB0u);
    ctx->pc = 0x1D3AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AA8u;
    // 0x1d3aac: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x1D3AA8u, 0x1D3AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AB0u;
label_1d3ab0:
    // 0x1d3ab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d3ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ab4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1d3ab4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3ab8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1d3ab8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1d3abc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1d3abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d3ac0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1d3ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d3ac4: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1d3ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d3ac8: 0xf08021  addu        $s0, $a3, $s0
    ctx->pc = 0x1d3ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_1d3acc:
    // 0x1d3acc: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x1D3ACCu;
    SET_GPR_U32(ctx, 31, 0x1D3AD4u);
    ctx->pc = 0x1D3AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3ACCu;
    // 0x1d3ad0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x1D3ACCu, 0x1D3AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AD4u;
label_1d3ad4:
    // 0x1d3ad4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d3ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d3ad8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d3ad8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d3adc: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1d3adcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3ae0: 0x551004  sllv        $v0, $s5, $v0
    ctx->pc = 0x1d3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3ae4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d3ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d3ae8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1d3ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1d3aec: 0xc078258  jal         func_1E0960
    ctx->pc = 0x1D3AECu;
    SET_GPR_U32(ctx, 31, 0x1D3AF4u);
    ctx->pc = 0x1D3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AECu;
    // 0x1d3af0: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0960u, 0x1D3AECu, 0x1D3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AF4u;
label_1d3af4:
    // 0x1d3af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3af8: 0xde2200a0  ld          $v0, 0xA0($s1)
    ctx->pc = 0x1d3af8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1d3afc: 0x2831814  dsllv       $v1, $v1, $s4
    ctx->pc = 0x1d3afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 20) & 0x3F));
    // 0x1d3b00: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1d3b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d3b04: 0x276202a  slt         $a0, $s3, $s6
    ctx->pc = 0x1d3b04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1d3b08: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x1d3b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3b0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d3b10: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d3b14: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x1d3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x1d3b18: 0x3c7f021  addu        $fp, $fp, $a3
    ctx->pc = 0x1d3b18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x1d3b1c: 0x1480ff9e  bnez        $a0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1D3B1Cu;
    {
        const bool branch_taken_0x1d3b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B1Cu;
        // 0x1d3b20: 0xfe2200a0  sd          $v0, 0xA0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b1c) {
            ctx->pc = 0x1D3998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3998;
        }
    }
    ctx->pc = 0x1D3B24u;
label_1d3b24:
    // 0x1d3b24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d3b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b28: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1d3b28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d3b2c: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x1d3b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_1d3b30:
    // 0x1d3b30: 0x3b02821  addu        $a1, $sp, $s0
    ctx->pc = 0x1d3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1d3b34: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1d3b34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3b38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3B38u;
    {
        const bool branch_taken_0x1d3b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b38) {
            ctx->pc = 0x1D3B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3B38u;
            // 0x1d3b3c: 0x2502821  addu        $a1, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3B50u;
            goto label_1d3b50;
        }
    }
    ctx->pc = 0x1D3B40u;
    // 0x1d3b40: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d3b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3b44: 0xc077832  jal         func_1DE0C8
    ctx->pc = 0x1D3B44u;
    SET_GPR_U32(ctx, 31, 0x1D3B4Cu);
    ctx->pc = 0x1D3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B44u;
    // 0x1d3b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0C8u, 0x1D3B44u, 0x1D3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B4Cu;
label_1d3b4c:
    // 0x1d3b4c: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x1d3b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1d3b50:
    // 0x1d3b50: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1d3b50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3b54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3B54u;
    {
        const bool branch_taken_0x1d3b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b54) {
            ctx->pc = 0x1D3B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3B54u;
            // 0x1d3b58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3B6Cu;
            goto label_1d3b6c;
        }
    }
    ctx->pc = 0x1D3B5Cu;
    // 0x1d3b5c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d3b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3b60: 0xc07784c  jal         func_1DE130
    ctx->pc = 0x1D3B60u;
    SET_GPR_U32(ctx, 31, 0x1D3B68u);
    ctx->pc = 0x1D3B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B60u;
    // 0x1d3b64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE130u, 0x1D3B60u, 0x1D3B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B68u;
label_1d3b68:
    // 0x1d3b68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3b6c:
    // 0x1d3b6c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1d3b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d3b70: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D3B70u;
    {
        const bool branch_taken_0x1d3b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B70u;
        // 0x1d3b74: 0x1380c0  sll         $s0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b70) {
            ctx->pc = 0x1D3B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3b30;
        }
    }
    ctx->pc = 0x1D3B78u;
    // 0x1d3b78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d3b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1d3b84:
    // 0x1d3b84: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1d3b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3b88: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1d3b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3b8c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1d3b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3b90: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1d3b90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d3b94: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1d3b94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3b98: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1d3b98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d3b9c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1d3b9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3ba0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1d3ba0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d3ba4: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1d3ba4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d3ba8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1d3ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d3bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BACu;
        // 0x1d3bb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3BB4u;
}

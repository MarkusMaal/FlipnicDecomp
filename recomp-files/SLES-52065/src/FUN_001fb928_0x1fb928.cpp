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

// Function: FUN_001fb928
// Address: 0x1fb928 - 0x1fba88
void FUN_001fb928_0x1fb928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb928_0x1fb928");
#endif

    switch (ctx->pc) {
        case 0x1fba44u: goto label_1fba44;
        default: break;
    }

    ctx->pc = 0x1fb928u;

    // 0x1fb928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb92c: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x1fb92cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1fb930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb934: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1fb934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb938: 0x3c077f80  lui         $a3, 0x7F80
    ctx->pc = 0x1fb938u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32640 << 16));
    // 0x1fb93c: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x1fb93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1fb940: 0x21dc3  sra         $v1, $v0, 23
    ctx->pc = 0x1fb940u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x1fb944: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FB944u;
    {
        const bool branch_taken_0x1fb944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB944u;
        // 0x1fb948: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb944) {
            ctx->pc = 0x1FB9B8u;
            goto label_1fb9b8;
        }
    }
    ctx->pc = 0x1FB94Cu;
    // 0x1fb94c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1fb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb950: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb954: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1fb954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1fb958: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB958u;
    {
        const bool branch_taken_0x1fb958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB958u;
        // 0x1fb95c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb958) {
            ctx->pc = 0x1FB970u;
            goto label_1fb970;
        }
    }
    ctx->pc = 0x1FB960u;
    // 0x1fb960: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fb960u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb964: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1FB964u;
    {
        const bool branch_taken_0x1fb964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB964u;
        // 0x1fb968: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb964) {
            ctx->pc = 0x1FBA80u;
            goto label_1fba80;
        }
    }
    ctx->pc = 0x1FB96Cu;
    // 0x1fb96c: 0x0  nop
    ctx->pc = 0x1fb96cu;
    // NOP
label_1fb970:
    // 0x1fb970: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x1fb970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x1fb974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb978: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1fb978u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb97c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fb97cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fb980: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1fb980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1fb984: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1fb984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb988: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x1fb988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1fb98c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fb990: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x1fb990u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x1fb994: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x1fb994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x1fb998: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1fb998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fb99c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB99Cu;
    {
        const bool branch_taken_0x1fb99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB99Cu;
        // 0x1fb9a0: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb99c) {
            ctx->pc = 0x1FB9B8u;
            goto label_1fb9b8;
        }
    }
    ctx->pc = 0x1FB9A4u;
    // 0x1fb9a4: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x1fb9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x1fb9a8: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x1fb9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x1fb9ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb9b0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1FB9B0u;
    {
        const bool branch_taken_0x1fb9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9B0u;
        // 0x1fb9b4: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9b0) {
            ctx->pc = 0x1FBA78u;
            goto label_1fba78;
        }
    }
    ctx->pc = 0x1FB9B8u;
label_1fb9b8:
    // 0x1fb9b8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1fb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fb9bc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB9BCu;
    {
        const bool branch_taken_0x1fb9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9BCu;
        // 0x1fb9c0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9bc) {
            ctx->pc = 0x1FB9D0u;
            goto label_1fb9d0;
        }
    }
    ctx->pc = 0x1FB9C4u;
    // 0x1fb9c4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1fb9c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb9c8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1FB9C8u;
    {
        const bool branch_taken_0x1fb9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9C8u;
        // 0x1fb9cc: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9c8) {
            ctx->pc = 0x1FBA78u;
            goto label_1fba78;
        }
    }
    ctx->pc = 0x1FB9D0u;
label_1fb9d0:
    // 0x1fb9d0: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x1fb9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1fb9d4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FB9D4u;
    {
        const bool branch_taken_0x1fb9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9d4) {
            ctx->pc = 0x1FBA2Cu;
            goto label_1fba2c;
        }
    }
    ctx->pc = 0x1FB9DCu;
    // 0x1fb9dc: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FB9DCu;
    {
        const bool branch_taken_0x1fb9dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9DCu;
        // 0x1fb9e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9dc) {
            ctx->pc = 0x1FBA08u;
            goto label_1fba08;
        }
    }
    ctx->pc = 0x1FB9E4u;
    // 0x1fb9e4: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x1fb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x1fb9e8: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1fb9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x1fb9ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb9f0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1fb9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1fb9f4: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1fb9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fb9f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fb9f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb9fc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FB9FCu;
    {
        const bool branch_taken_0x1fb9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9FCu;
        // 0x1fba00: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9fc) {
            ctx->pc = 0x1FBA80u;
            goto label_1fba80;
        }
    }
    ctx->pc = 0x1FBA04u;
    // 0x1fba04: 0x0  nop
    ctx->pc = 0x1fba04u;
    // NOP
label_1fba08:
    // 0x1fba08: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x1fba08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x1fba0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FBA0Cu;
    {
        const bool branch_taken_0x1fba0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA0Cu;
        // 0x1fba10: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba0c) {
            ctx->pc = 0x1FBA4Cu;
            goto label_1fba4c;
        }
    }
    ctx->pc = 0x1FBA14u;
    // 0x1fba14: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fba14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fba18: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x1fba18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x1fba1c: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x1fba1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x1fba20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fba20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fba24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBA24u;
    {
        const bool branch_taken_0x1fba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba24) {
            ctx->pc = 0x1FBA38u;
            goto label_1fba38;
        }
    }
    ctx->pc = 0x1FBA2Cu;
label_1fba2c:
    // 0x1fba2c: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1fba2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1fba30: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1fba30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1fba34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fba34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fba38:
    // 0x1fba38: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1fba38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fba3c: 0xc07edb8  jal         func_1FB6E0
    ctx->pc = 0x1FBA3Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA44u);
    ctx->pc = 0x1FBA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA3Cu;
    // 0x1fba40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6E0u, 0x1FBA3Cu, 0x1FBA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA44u;
label_1fba44:
    // 0x1fba44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FBA44u;
    {
        const bool branch_taken_0x1fba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA44u;
        // 0x1fba48: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba44) {
            ctx->pc = 0x1FBA78u;
            goto label_1fba78;
        }
    }
    ctx->pc = 0x1FBA4Cu;
label_1fba4c:
    // 0x1fba4c: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x1fba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x1fba50: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x1fba50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x1fba54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fba54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fba58: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1fba58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x1fba5c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1fba5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1fba60: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1fba60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fba64: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x1fba64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x1fba68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fba68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fba6c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1fba6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fba70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fba70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fba74: 0x0  nop
    ctx->pc = 0x1fba74u;
    // NOP
label_1fba78:
    // 0x1fba78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fba78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fba7c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1fba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fba80:
    // 0x1fba80: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA80u;
        // 0x1fba84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBA88u;
}
